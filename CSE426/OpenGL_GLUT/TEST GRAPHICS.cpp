#include <graphics.h>
#include<stdio.h>
int main()
{
/* initialize graphics window at 400 x 300 */
initwindow(1060, 700);
int i,j,k,l,m,val1,val2,val3,val4;
//bar3d(100,100,200,200,20,1);
val4=(int)GetTickCount();
printf("%d",val4);
/* draw a line */
line(0, 0, 188, 188);
line(1060,0,860,188);
line(1060,700,860,512);
line(0,700, 188, 512);
for(i=2;i<20;i++){
        if(i%2==0)
        setcolor(GREEN);
if(i%2==1)
    setcolor(BLUE);
    delay(200);
    val1=i*50;
        circle(50*i,100,90);
}
for(j=2;j<13;j++){
    if(j%2==0)
        setcolor(GREEN);
if(j%2==1)
    setcolor(BLUE);
    delay(200);
    val2=j*50;
        circle(val1,j*50,90);
}
for(k=19;k>=2;k--){
    if(k%2==0)
        setcolor(GREEN);
if(k%2==1)
    setcolor(BLUE);
    delay(200);
        circle(50*k,val2,90);
}
for(l=12;l>1;l--){
    if(l%2==0)
        setcolor(GREEN);
if(l%2==1)
    setcolor(BLUE);
   delay(200);

        circle(100,l*50,90);
}
/* clean up */
getch();
closegraph();
return 0;
}
