#include<iostream>

using namespace std;

int main()
{
    int search(int [],int,int);
    int n,i,a[100],e,res;
    cout<<"How Many Elements:";
    cin>>n;
    cout<<"\n Enter Elements of Array in Ascending order \n";

    for(i=0;i<n;++i)
    {
        cin>>a[i];
    }

    cout<<"\n Enter element to search:";
    cin>>e;

    res=search(a,n,e);

    if(res!=-1)
        cout<<"\n Element found at position "<<res+1;
    else
        cout<<"\n Element is not found....!!!";

    return 0;
}

int search(int a[],int n,int e)
{
    int f,l,m;
    f=0;
    l=n-1;

    while(f<=l)
    {
        m=(f+l)/2;
        if(e==a[m])
            return(m);
        else
            if(e>a[m])
                f=m+1;
            else
                l=m-1;
    }

    return -1;
}
