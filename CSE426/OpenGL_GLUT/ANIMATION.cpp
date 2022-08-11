#include <graphics.h>
#include <dos.h>
#include <conio.h>

main()
{
   int i, j = 0, gd = DETECT, gm,maxx;

   initgraph(&gd,&gm,"C:\\TC\\BGI");




      //rectangle(150+i,350,200+i,400);
      for( i = 0 ; i <= 450 ; i = i + 10, j++ )
       {
      rectangle(100+i,100,300+i,200);
      line(100+i,200,2+i,120);
      line(100+i,150,2+i,120);

        line(100+i,110,300+i,110);
         line(100+i,120,300+i,120);
          line(100+i,130,300+i,130);
           line(100+i,140,300+i,140);
            line(100+i,150,300+i,150);
             line(100+i,160,300+i,160);
              line(100+i,170,300+i,170);
               line(100+i,180,300+i,180);
                line(100+i,190,300+i,190);

circle(50+i,30,20);
 line(50+i,48,50+i,133);

      //dar
      line(120+i,40,10+i,200);

        line(300+i,200,400+i,120);
          line(400+i,120,300+i,140);


       setcolor(2);
      delay(300);

      if( i == 420 )
         i=0;

      clearviewport();
   }



   getch();
   closegraph();
   return 0;
}

