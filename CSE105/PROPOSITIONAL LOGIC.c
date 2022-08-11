#include<stdio.h>
void main(){
    int p,q,option;
    do{
        printf("Value of p (0 for false, 1 for true):");
        scanf("%d",&p);
        printf("Value of q (0 for false, 1 for true):");
        scanf("%d",&q);
        printf("\n\nPress:\n1:NOT\n2:AND\n3:OR\n4:XOR\n5:IF-THEN\n6:IF AND ONLY IF\n7:EXIT\n\n");
        scanf("%d",&option);
        switch(option){
            case 1:
                if(p==0)
                    printf("-p=1\n");
                else
                    printf("-p=0\n");
                if(q==0)
                    printf("-q=1\n");
                else
                    printf("-q=0\n");
                break;
            case 2:
                if(p && q ==1)
                    printf("p AND q=1\n");
                else
                    printf("p AND q=0\n");
                break;
            case 3:
                if(p || q ==1)
                    printf("p OR q=1\n");
                else
                    printf("p OR q=0\n");
                break;
            case 4:
                if(p==q)
                    printf("p XOR q=0\n");
                else
                    printf("p XOR q=1\n");
                break;
            case 5:
                if(p==0&&q==0)
                    printf("p->q=1\n");
                else
                   printf("p->q=%d\n",q);
                break;
            case 6:
                if(p==q)
                    printf("p<->q=1\n");
                else
                    printf("p<->q=0\n");
                break;
            case 7:
                break;
        }
    }
    while(option!=7);
}
