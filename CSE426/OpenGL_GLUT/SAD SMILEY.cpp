#include<graphics.h>
#include<conio.h>

int main()
{
    initwindow(700,650);
   int gd = DETECT, gm;
setcolor(YELLOW);
circle(350,325,300);
circle(220,250,40);
circle(460,250,40);
arc(350,520,0,180,150);
line(350,250,350,300);
   getch();
   closegraph();
   return 0;
}
