#include<stdio.h>
#include<math.h>
float distance(int x1,int x2,int y1,int y2);
int main(){

int setAx[5]={4,5,6,7,8};
int setAy[5]={4,5,6,7,8};
int setBx[5]={15,16,17,17,19};
int setBy[5]={15,16,17,17,19};
float disA[5];
float disB[5];
int newPx=8;
int newPy=8;
float avgA=0;
float avgB=0;
for(int i=0;i<5;i++){
disA[i]=distance(setAx[i],newPx,setAy[i],newPy);
avgA+=disA[i];
disB[i]=distance(setBx[i],newPx,setBy[i],newPy);
avgB+=disB[i];
}

avgA=avgA/5;
avgB=avgB/5;

printf("\nAverage distance from point set A = %f",avgA);
printf("\nAverage distance from point set B = %f",avgB);

if(avgA<avgB)
    printf("\n\n\nA is nearest.\n\n\n");
else
    printf("\n\n\nB is nearest.\n\n\n");
return 0;
}

float distance(int x1,int x2,int y1,int y2){
int z=(x2-x1)*(x2-x1)+(y2-y1)*(y2-y1);
return sqrt(z);
}
