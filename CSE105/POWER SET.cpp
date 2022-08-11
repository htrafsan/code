#include<iostream>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include<vector>
using namespace std;
int main()
{
    vector<string> s;
    char p[10];
    string in;
    cout<<"Enter end to stop input\n";
    cin>>in;
    while(in!="end")
    {
        s.push_back(in);
        cin>>in;
    }
    int i,n;
    n=s.size();
    n=ceil(pow(2,n));
    for(i=0; i<n; i++)
    {
        itoa(i,p,2);
        int l=strlen(p);
        cout<<"{";
        for(int j=0; j<l; j++) if(p[j]-'0') cout<<s[l-j-1]<<",";
        cout<<"} ";
    }
}
