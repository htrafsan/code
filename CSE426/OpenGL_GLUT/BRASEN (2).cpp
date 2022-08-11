# include<stdio.h>
# include<conio.h>
# include<graphics.h>
# include<math.h>

int main()
{
initwindow(500,400);
line(250,10,250,390);
line(10,200,490,200);
putpixel(250,200,RED);
int x=0,y,r,d;
int x1=250,y1=200;
int xx[1000],yy[1000],i=0,j;
scanf("%d",&r);
y=r;
d=3-(2*r);
while(x<=y)
{
xx[i]=x;
yy[i]=y;
    if(d<0)
        d=d+4*x+6;
    else
        {
            d=d+4*(x-y)+10;
    y--;

        }
x++;
i++;
}
for(j=0;j<i;j++)
{
    printf("%d   %d\n",xx[j],yy[j]);
}
for(j=0;j<i;j++)
{
    x=xx[j];
    y=yy[j];
    putpixel(x1+x,y1+y,WHITE);
}
delay(100);
for(j=0;j<i;j++)
{
    x=xx[j];
    y=yy[j];
    putpixel(x1-x,y1-y,WHITE);
}
delay(100);
for(j=0;j<i;j++)
{
    x=xx[j];
    y=yy[j];
    putpixel(x1+x,y1-y,WHITE);
}
delay(100);
for(j=0;j<i;j++)
{
    x=xx[j];
    y=yy[j];
    putpixel(x1-x,y1+y,WHITE);
}
delay(100);
for(j=0;j<i;j++)
{
    x=xx[j];
    y=yy[j];
    putpixel(x1+y,y1-x,WHITE);
}
delay(100);
for(j=0;j<i;j++)
{
    x=xx[j];
    y=yy[j];
    putpixel(x1-y,y1-x,WHITE);
}
delay(100);
for(j=0;j<i;j++)
{
    x=xx[j];
    y=yy[j];
    putpixel(x1+y,y1+x,WHITE);
}
delay(100);
for(j=0;j<i;j++)
{
    x=xx[j];
    y=yy[j];
    putpixel(x1-y,y1+x,WHITE);
}
delay(100);
getch();
closegraph();
}
