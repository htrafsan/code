#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;
int main(void)
{
    bool r=true;
    char s[15],c[7];
    float f[6],dd[4],A[19],B[19],l;
    int z=0,i,x,h=0,v=0,u,g=-9,p,j,m[3],max=0,q=0;
    for(i=0; i<19; i++)
    {
        A[i]=g;
        g++;
    }
    string qq;
    cout<<"F(x)= ";
    cin>>qq;
    strcpy(s,qq.c_str());
    for(p=0; p<19; p++)
    {
        x=A[p];
        z=0;
        h=0;
        for(i=0; i<strlen(s); i++)
        {
            if(s[i]!='+'&&s[i]!='-'&&s[i]!='*'&&s[i]!='/'&&s[i]!='^')
            {
                if(s[i]=='x')
                {
                    if(s[i+1]=='^')
                    {
                        f[z]=pow(x,(s[i+2]-'0'));
                        l=f[z];
                        z++;
                    }
                    else
                    {
                        f[z]=x;
                        l=f[z];
                        z++;
                    }
                }
                else
                {
                    if(s[i-1]!='^')
                    {
                        f[z]=s[i]-'0';
                        z++;
                    }
                }
            }
            else if(s[i]=='+'||s[i]=='-'||s[i]=='*'||s[i]=='/')
            {
                c[h]=s[i];
                h++;
            }
        }
        for(i=0; i<h; i++)
        {
            if(c[i]=='/'||c[i]=='*')
            {
                if(c[i]=='/')
                {
                    f[i+1]=f[i]/f[i+1];
                }
                else
                {
                    f[i+1]=f[i]*f[i+1];
                }
                l=f[i+1];
            }
        }
        for(i=0; i<h; i++)
        {
            if(c[i]=='+'||c[i]=='-')
            {
                if(c[i]=='+')
                {
                    if(c[i+1]!='*'&&c[i+1]!='/')
                        f[i+1]=f[i]+f[i+1];
                    else if(c[i+1]=='*'||c[i+1]=='/')
                        f[i+1]=f[i]+f[i+2];
                    l=f[i+1];
                }
                else
                {
                    if(c[i+1]!='*'&&c[i+1]!='/')
                        f[i+1]=f[i]-f[i+1];
                    else if(c[i+1]=='*'||c[i+1]=='/')
                        f[i+1]=f[i]-f[i+2];
                    l=f[i+1];
                }
            }
        }
        B[p]=l;
    }

    for(i=0; i<19; i++)
    {
        for(p=i+1; p<19; p++)
        {
            if(B[i]==B[p])
                r=false;
        }
        if(r==false)
            break;
    }
    if(r==false)
        cout<<"Your given function is not One-To-One.\n";
    else
        cout<<"Your given function is One-To-One.\n";


    for(i=0; i<strlen(s); i++)
    {
        if(s[i] == 'x')
        {
            if(s[i+1] == '^')
            {
                m[q] = s[i+2] - '0';
                q++;
            }
            else
            {
                m[q] = 1;
                q++;
            }
        }
    }
    for(i=0; i<q; i++)
    {

        if(max<m[i])

            max=m[i];
    }

    if(max%2==0)
        cout<<"Your given function is not Onto.";
    else
        cout<<"Your given function is Onto.";
    if(r==true&&(max%2)!=0)
        cout<<"\nYour given function is Bijection.";
    else
        cout<<"\nYour given function is not Bijection.";

}
