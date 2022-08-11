#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<dos.h>
#include<graphics.h>

int main()
{
	int gd=DETECT,gm;
	int i=0,m=0;
	initgraph(&gd,&gm,"..\\bgi");
	while(!kbhit())
	{
		cleardevice();
		i++;
		if(i>getmaxx())
			i-=670;
		line(80+i,300,90+i,270);
		line(90+i,270,120+i,270);
		line(120+i,270,160+i,240);
		line(160+i,240,230+i,240);
		line(230+i,240,275+i,270);
		line(275+i,270,310+i,270);
		line(310+i,270,335+i,290);
		line(335+i,290,335+i,300);
		line(255+i,300,335+i,300);
		line(180+i,300,210+i,300);
		line(80+i,300,135+i,300);
		arc(232+i,300,0,180,23);
		arc(157+i,300,0,180,23);
		circle(232+i,300,18);
		circle(157+i,300,18);
		pieslice(232+i,300,0+m,90+m,18);
		pieslice(232+i,300,180+m,270+m,18);
		pieslice(157+i,300,0+m,90+m,18);
		pieslice(157+i,300,180+m,270+m,18);
		if(m<-360)
			m=90;
		m-=3;
	delay(5);
	}
	getch();
	closegraph();
}
