#include <graphics.h>
#include <conio.h>

main()
{
   int gd = DETECT, gm;

   initgraph(&gd, &gm, "C:\\TC\\BGI");

//area rectangle
  setcolor(2);
  line(100,200,100,300);
  line(300,200,300,300);
  line(100,200,300,200);
  line(100,300,300,300);

// trapezium
  line(80,200,110,140);
  line(110,140,270,140);
  line(270,140,240,200);

// triangle
  line(270,140,320,200);
  line(80,200,320,200);

//door
  setcolor(14);
  line(180,300,180,230);
  line(220,300,220,230);
  line(180,230,220,230);

//window left
  setcolor(4);
  line(120,240,120,260);
  line(140,240,140,260);
  line(120,240,140,240);
  line(120,260,140,260);

//window right
  setcolor(4);
  line(280,240,280,260);
  line(260,240,260,260);
  line(280,240,260,240);
  line(280,260,260,260);


   getch();
   closegraph();
   return 0;
}
