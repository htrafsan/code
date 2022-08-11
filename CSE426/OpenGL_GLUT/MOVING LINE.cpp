#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<time.h>
#include<stdlib.h>
int main()
{
    srand(time(NULL));
int r=0;
r= rand();
printf("%d",r);

    int gd=DETECT,gm;
	int i=0,m=10,j=0,y=100,x=100;
	initgraph(&gd,&gm,"..\\bgi");
	while(!kbhit())
	{
		cleardevice();
		i++;
		j++;
		x=10+i;
		j=rand()%1000;
		if(i>getmaxx()){
			i-=670;}
			if(j>getmaxy())
            {
              j=j-360;
            }


			line(10+j,20+j,150+j,200+j);
	delay(50);
	}
	getch();
	closegraph();
}
