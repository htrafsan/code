#include<graphics.h>
#include<stdio.h>
#include<conio.h>
#include<iostream>
using namespace std;
int main()
{
    initwindow(700,700);
    int x1,x2,y1,y2,dx,dy,dt,ds,d,x,y;
    printf("Enter x1,y1,x2,y2\n");
    scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
    x=x1;
    y=y1;
    dx=x2-x1;
    dy=y2-y1;
    dt=2*(dy-dx);
    ds=2*dy;
    d=2*dy-dx;
    putpixel(x,y,GREEN);
    while(x<x2)
    {
        x++;
        if(d<0)
            d=d+ds;
        else
        {
            y++;
            d=d+dt;
        }
        putpixel(x,y,GREEN);
    }
    line(x1, y1, x2,y2);
    getch();
closegraph();
return 0;
}
