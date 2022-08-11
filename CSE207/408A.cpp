#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>
#include<cstdlib>
using namespace std;
int main(void)
{
    int n,m,k,a,t=1000000;
    while(scanf("%d%d%d",&n,&m,&k)!=EOF)
    {

        for(int i=1; i<=n; i++)
        {
            scanf("%d",&a);
            if(a>0&&a<=k)
                if(t>abs(m-i))
                    t=abs(m-i);

        }
        printf("%d",t*10);
    }
    return 0;
}
