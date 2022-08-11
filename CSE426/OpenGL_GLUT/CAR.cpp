#include<graphics.h>
int main()
{
    initwindow(700,700);
    line(40,50,140,50);
    line(40,50,25,80);
    line(25,80,190,80);
    line(140,50,160,80);
    line(25,80,25,140);
    line(190,80,250,140);
    line(25,140,45,140);
    circle(55,140,10);
    line(65,140,195,140);
    circle(205,140,10);
    line(215,140,250,140);
    getch();
closegraph();
return 0;
}
