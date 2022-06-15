#include<iostream>
#include<cstdio>
using namespace std;

int *a;
int n;

//write your recursive function



int main()
{

    cout<<"enter n:";
    cin>>n;
    a =new int[n];

    for(int i=0; i<n; i++)cin>>a[i];
    cout<<"a: ";
    for(int i=0; i<n; i++)cout<<a[i]<<" ";
    cout<<endl;

    //write your code

    return 0;
}
