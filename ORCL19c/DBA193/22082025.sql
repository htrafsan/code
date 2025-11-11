create table products(prod_id number, 
				product_name VARCHAR2(200) not null,
				description varchar2(500),
				uom VARCHAR2(10),
				qty number, 
				discount number(2,2),
				rate number not null, 
		constraint products_prod_id_pk PRIMARY key (prod_id),
		constraint products_prod_nm_uq UNIQUE (product_name),
		constraint products_qty_ck CHECK (qty>=0)
		);

INSERT INTO PRODUCTS (PROD_ID, PRODUCT_NAME, description, UOM, QTY, DISCOUNT, RATE)
VALUES (100, 'A4 Tech Mouse', null, 'Pcs', 10, .20, 800) ;

INSERT INTO PRODUCTS (PROD_ID, PRODUCT_NAME, description, UOM, QTY, DISCOUNT, RATE)
VALUES (101, 'A4 Tech Keyboard', null, 'Pcs', 5, .15, 600) ;

		
drop table sales ;

create table sales( sale_id number, 
				prod_id number not null, 
				qty number, 
				discount number(2,2),
				rate number,
		constraint sales_sale_id_pk PRIMARY key (sale_id),
		constraint sales_prod_id_fk FOREIGN key (prod_id)
			REFERENCES products (prod_id),
		constraint sales_qty_ck CHECK (qty>0),
		constraint sales_rate_ck CHECK (rate>0)
		) ;


alter table sales drop constraint sales_rate_ck ;

ALTER TABLE SALES MODIFY QTY NUMBER(4) ;

ALTER TABLE SALES RENAME COLUMN RATE TO SALE_RATE ;

ALTER TABLE SALES ADD AMOUNT NUMBER;

ALTER TABLE SALES ADD CONSTRAINT SALES_AMT_CK CHECK (AMOUNT>=0) ;

ALTER TABLE SALES RENAME TO PRODUCT_SALES ;

insert into PRODUCT_SALES (sale_id, prod_id, qty, discount, SALE_RATE, AMOUNT)
values (1, 100, 2, .10, 800, 1440) ;

insert into PRODUCT_SALES (sale_id, prod_id, qty, discount, SALE_RATE, AMOUNT)
values (2, 101, 1, .15, 600, 510) ;


select constraint_name, column_name 
from user_cons_columns
where table_name='SALES'


select p.product_name, s.qty, s.DISCOUNT, 
	(s.qty*s.SALE_RATE*nvl(s.discount,0)) dis_amt, 
	s.SALE_RATE,(s.qty*s.SALE_RATE)-(s.qty*s.SALE_RATE*nvl(s.discount,0)) amount,
		sale_date, entry_date
from PRODUCTS p, PRODUCT_SALES s 
where p.prod_id=s.prod_id 


alter table PRODUCT_SALES add sale_date date ;

alter table PRODUCT_SALES add entry_date TIMESTAMP DEFAULT sysdate ;

insert into PRODUCT_SALES (sale_id, prod_id, qty, discount, SALE_RATE, sale_date)
values (3, 100, 3, .12, 800, '21-AUG-25') ;


CREATE TABLE PROD(PRODID NUMBER PRIMARY KEY, PROD_NAME VARCHAR2(100)) ;

CREATE TABLE TRAN(TRANID NUMBER, TRANDT DATE DEFAULT SYSDATE, PRODID NUMBER,
		CONSTRAINT TRAN_PRODID_FK FOREIGN KEY (PRODID) 
			REFERENCES PROD (PRODID) ON DELETE CASCADE) ;
			
INSERT INTO PROD values (1000, 'Monitor') ;

INSERT INTO PROD values (1001, 'Mouse') ;

INSERT INTO PROD values (1002, 'Keyboard') ;


insert into tran values (1, DEFAULT, 1000) ;

insert into tran values (2, DEFAULT, 1001) ;

insert into tran values (3, DEFAULT, 1002) ;

insert into tran values (4, DEFAULT, 1000) ;

insert into tran values (5, DEFAULT, 1002) ;

delete from prod where prodid=1000;

alter table TRAN drop constraint TRAN_PRODID_FK ;

ALTER TABLE TRAN 
ADD CONSTRAINT TRAN_PRODID_FK FOREIGN KEY (PRODID) 
			REFERENCES PROD (PRODID) ON DELETE SET NULL
			
			
SELECT * FROM PROD

SELECT * FROM TRAN

DELETE PROD WHERE PRODID=1000


CREATE TABLE SALES_TRAN 
AS 
select p.product_name, s.qty, s.DISCOUNT, 
	(s.qty*s.SALE_RATE*nvl(s.discount,0)) dis_amt, 
	s.SALE_RATE,(s.qty*s.SALE_RATE)-(s.qty*s.SALE_RATE*nvl(s.discount,0)) amount,
		sale_date, entry_date
from PRODUCTS p, PRODUCT_SALES s 
where p.prod_id=s.prod_id 

ALTER TABLE PROD READ ONLY ;

INSERT INTO PROD VALUES (1005, 'Remote') ;

drop table SALES_TRAN;

select * from recyclebin

select * from SALES_TRAN

flashback table SALES_TRAN to before drop ;

drop table SALES_TRAN PURGE ;


select name from v$database ;

select  FILE#, name from v$datafile ;

select table_name from user_tables ;

select * from user_constraints where table_name='EMPLOYEES' ;

 select * from user_cons_COLUMNS where table_name='EMPLOYEES' ;
 
 select * from DICTIONARY
WHERE TABLE_NAME LIKE '%USER_TAB%'

 SELECT TABLESPACE_NAME FROM DBA_TABLESPACES ;
 
 SELECT TABLESPACE_NAME, BLOCK_SIZE, MAX_EXTENTS FROM DBA_TABLESPACES;
  
 
 ALTER TABLESPACE USERS ADD DATAFILE 'E:\Delwar\oradata\DBA193\USERS02.DBF' SIZE 5G ;
 
 
 COMMENT ON TABLE PRODUCTS
	IS 'PRODUCT Information';

SELECT * FROM USER_TAB_COMMENTS
WHERE TABLE_NAME='PRODUCTS'