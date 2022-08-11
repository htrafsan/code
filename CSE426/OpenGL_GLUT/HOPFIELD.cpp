#include<iostream>
#include<stdio.h>
using namespace std;
int Mu[4]= {-1,-1,1,1};
int main()
{
    int W[4][4],p0[4]= {1,-1,1,-1},p1[4]= {1,1,1,1},p2[4]= {-1,-1,-1,-1},p3[4]= {1,1,-1,-1};
    int i,j,k,l,sum=0,t=0;
    int Mu2[4];
    for(i=0; i<4; i++)
    {
        for(j=0; j<4; j++)
        {
            if(i==j)
                W[i][j]=0;
            else
            {
                sum=p0[i]*p0[j]+p1[i]*p1[j]+p2[i]*p2[j]+p3[i]*p3[j];
                W[i][j]=sum;
            }
        }
        sum=0;
    }
    printf("Weighted Matrix:\n");
    for(i=0; i<4; i++)
    {
        for(j=0; j<4; j++)
        {
            printf("%d ",W[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<4;i++)
        scanf("%d",&Mu[i]);
    printf("\nChanged Pattern\n");
    for(i=0; i<4; i++)
        printf("%d ",Mu[i]);
    printf("\n");
    while(t<2)
    {
        for(k=0; k<4; k++)
            Mu2[k]=Mu[k];

        for(i=0; i<4; i++)
        {
            for(j=0; j<4; j++)
            {
                sum=W[i][j]*Mu[j];
            }
            if(sum<=1)
                Mu[i]=-1;
            if(sum>1)
                Mu[i]=1;
            sum=0;
        }
        for(l=0; l<4; l++)
            printf("%d ",Mu[l]);
        printf("\n");
        if(Mu2[0]== Mu[0]&& Mu2[1]== Mu[1]&& Mu2[2]== Mu[2]&& Mu2[3]== Mu[3])
        {
            t++;
        }
    }
}
