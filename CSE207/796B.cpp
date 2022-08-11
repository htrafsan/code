#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
using namespace std;
int main(void)
{
    long int n,m,k;
    vector<long int> h1,h2,num;
    long int n1,h01,h02;
    while((scanf("%ld%ld%ld",&n,&m,&k))==3)
    {
        h1.clear();
        h2.clear();
        num.clear();
        int flag=0;
        long int last=0;
        for(long int i=0; i<m; i++)
        {
            cin>>n1;
            num.push_back(n1);
        }
        for(long int j=0; j<k; j++)
        {
            cin>>h01;
            h1.push_back(h01);
            cin>>h02;
            h2.push_back(h02);
        }
        for(long int i=0; i<k; i++)
        {
            if(flag == 1)
            {
                break;
            }
            for(long int j=0; j<m; j++)
            {
                if(h1[i]==num[j])
                {
                    cout<<h1[i];
                    flag=1;
                    break;
                }
                if(h2[i]==num[j])
                {
                    cout<<h2[i];
                    flag=1;
                    break;
                }
            }
            last=i;
        }
        if(flag==0)
        {
            cout<<h2[last];
        }
    }
    return 0;
}
