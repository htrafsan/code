#include<graphics.h>

main()
{
    int gd=DETECT,gm,i;
    initgraph(&gd,&gm,"C:\\TC\\BGI");

    outtextxy(100,240,"Press any key to view the start game");
    getch();

for(i=0;i<=200;i++)
    {
      bar(0,225,650,235);

     bar(10+i,450,70+i,460);
     setcolor(GREEN);
     circle(40+i,445-i,5);
     floodfill(40+i,445-i,GREEN);

    delay(20);
    clearviewport();
    }
   int j=200;
    for(i=200;i<=400;i++)
    {
     bar(0,225,650,235);
     bar(10+i,450,70+i,460);
     setcolor(GREEN);
     circle(40+i,445-j,5);
     floodfill(40+i,445-j,GREEN);
     j--;

     delay(20);
     clearviewport();
    }

if(i>400)
    {
     bar(0,225,650,235);

     bar(410,450,470,460);
     setcolor(GREEN);
     circle(440,445,5);
     floodfill(440,445,GREEN);
    getch();
    getch();
    }
}
