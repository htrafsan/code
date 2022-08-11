#include<iostream>
#include<cstdio>
using namespace std;
int main(void)
{
    int t,x,y,n,m;
    while(1)
    {
        scanf("%d",&t);
        if(t==0)
        {
            break;
        }
        scanf("%d%d",&x,&y);
        for(int i=0; i<t; i++)
        {
            scanf("%d%d",&n,&m);
            if(x==n || y==m)
            {
                printf("divisa\n");
            }
            else if(x<n && y<m)
            {
                printf("NE\n");
            }
            else if(x>n && y<m)
            {
                printf("NO\n");
            }
            else if(x>n && y>m)
            {
                printf("SO\n");
            }
            else if(x<n && y>m)
            {
                printf("SE\n");
            }
        }
    }
    return 0;
}
