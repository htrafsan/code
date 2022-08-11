#include <graphics.h>
#include<stdio.h>
int main()
{
/* initialize graphics window at 400 x 300 */
initwindow(700, 300);
int i,j,k,l,m,val1,val2,val3,val4;
//bar3d(100,100,300,300,50,100);
setcolor(YELLOW);
//bar(100,100,200,200);

arc(100,100,0,135,50);
int x0=10,x1=50;
//drawpoly(100,200);
for(i=1;;i++)
{
delay(50);
//x0=x0+i;
line(x0+i,100,x1+i,100);

    if((x1+i)==680)
        break;
}
/* clean up */
getch();
closegraph();
return 0;
}

