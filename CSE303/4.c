#include<stdio.h>
#include<math.h>
int main()
{
    int x,y,bandwidth, SNR;
    double bit_rate,z,level,w=0;
    scanf("%d%d",&x, &y);
    bandwidth= (x+1);
    SNR= (y+1)*10;
    z= (log10(1+SNR))/log10(2);
    //printf("%lf\n", z);
    bit_rate=(bandwidth*z);
    printf("Appropiate bit rate: %lf Mbps\n", bit_rate);
    w= bit_rate/(2*bandwidth);
    //printf("pow= %lf\n",w);
    level= pow(2, w);
    printf("Level: %lf", level);
    return 0;



}
