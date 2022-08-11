#include<graphics.h>
int main()
{
    initwindow(700,700);
    int x[50],y[50],i;
   label1:
    x[0]=40;x[1]=140;x[2]=25;x[3]=160;x[4]=190;x[5]=25;x[6]=45;x[7]=55;x[8]=65;x[9]=195;x[10]=205;x[11]=215;x[12]=250;
    y[0]=50;y[1]=50;y[2]=80;y[3]=80;y[4]=80;y[5]=140;y[6]=140;y[7]=140;y[8]=140;y[9]=140;y[10]=140;y[11]=140;y[12]=140;
   for(;;)
   {
    line(x[0],y[0],x[1],y[1]);
    line(x[0],y[0],x[2],y[2]);
    line(x[2],y[2],x[4],y[4]);
    line(x[1],y[1],x[3],y[3]);
    line(x[2],y[2],x[5],y[5]);
    line(x[4],y[4],x[12],y[12]);
    line(x[5],y[5],x[6],y[6]);
    circle(x[7],y[7],10);
    line(x[8],y[8],x[9],y[9]);
    line(x[11],y[11],x[12],y[12]);
    circle(x[10],y[10],10);


    for(i=0;i<13;i++)
    {
        x[i]++;
        Sleep(1);
    }
    cleardevice();
    if(x[2]==700)
        goto label1;
   }

    getch();
closegraph();
return 0;
}

