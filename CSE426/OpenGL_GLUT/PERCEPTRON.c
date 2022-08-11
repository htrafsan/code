#include<stdio.h>
#include<conio.h>
#include<math.h>
float wg[3]={.2,.3,.6},wtemp[3];
float inputval[8][3]={0,0,0,0,0,1,0,1,0,0,1,1,1,0,0,1,0,1,1,1,0,1,1,1};
float tta=.5,sum=0,sum2=0;
static int tempval=1;
int main()
{
int i,j,k,l,m,n,p,a,b;
stat:
for(i=0;i<8;i++){
        for(l=0;l<3;l++)
        {
            wtemp[l]=wg[l];
        }
        lvl:
    for(j=0;j<3;j++){
        sum=sum+(wtemp[j]*inputval[i][j]);
    }

    if(i<=3){
    if(sum>tta)
    {
        for(k=0;k<3;k++)
        {
            wtemp[k]=wtemp[k]-inputval[i][k];
        }
        goto lvl;
    }
    else{
    for(a=0;a<3;a++)
    {
wg[a]=wtemp[a];
    }
    }
    }
if(i>3){
    if(sum<tta)
    {
        for(b=0;b<3;b++)
        {
            wtemp[b]=wtemp[b]+inputval[i][b];
        }
        goto lvl;
    }
    else{
    for(a=0;a<3;a++)
    {
wg[a]=wtemp[a];
    }
    }
    }
for(m=0;m<3;m++)
{
    if(wtemp[m]!=wg[m]){
      goto stat;
    }
}


for(a=0;a<3;a++)
    {
wg[a]=wtemp[a];
}

printf("");
for(a=0;a<3;a++)
    {
printf("%f\t%d\n",wtemp[a],i);
}
printf("\n");
sum=0;
tempval=0;
}
printf("\n\n\n");
for(a=0;a<3;a++)
    {
printf("%f\t%d\n",wg[a],i);
}
printf("\n\n\n");
}

