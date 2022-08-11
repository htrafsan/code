#include<iostream>
#include<cstdio>
using namespace std;
int main(void)
{
    int t;
    long int a1,a2,d1,d2,k1,k2, sum1=0,sum2=0;
    scanf("%d",&t);
    for(int k=0; k<t; k++)
    {
        scanf("%ld%ld%ld%ld%ld%ld",&a1,&d1,&k1,&a2,&d2,&k2);
        sum1=((k1)*(2*a1+(k1-1)*d1))/2;
        sum2=((k2)*(2*a2+(k2-1)*d2))/2;
        printf("Case %d: %d\n",k+1,sum1+sum2);
    }
    return 0;
}
