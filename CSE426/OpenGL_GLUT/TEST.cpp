#include<graphics.h>
#include<conio.h>

int main()
{
    initwindow(700,650);
   int gd = DETECT, gm;
setcolor(WHITE);
circle(350,325,300);
circle(220,250,40);
circle(460,250,40);
arc(350,420,180,0,150);
line(350,250,350,400);
   getch();
   closegraph();
   return 0;
}
