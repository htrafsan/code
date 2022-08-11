#include<iostream>
#include<cstring>
using namespace std;
bool func(int h,bool p,bool q,bool a[],char b[],char s[]){
int i,j=0,x;
bool l;
 for(i=0;i<strlen(s);i++){
    if(s[i]=='p')
       {if(s[i-1]=='!')
        a[j]=!p;
        else
        a[j]=p;
        j++;}
    else if(s[i]=='q')
       {if(s[i-1]=='!')
        a[j]=!q;
        else
        a[j]=q;
         j++;}
}

for(x=0;x<h;x++)
   { if(b[x]=='&')
      {a[x]=a[x]&a[x+1];
      l=a[x];}
     }
for(x=0;x<h;x++)
   { if(b[x]=='|'){
       if(b[x-1]!='&')
       a[x]=a[x]|a[x+1];
       else
       a[x]=a[x-1]|a[x+1];
       l=a[x];
       }
     }


return (l);
}

int main(void){
bool p,q,a[5],v;
int j,h,i,x,ct=0;
char b[5];
char s[10];
string z;
cout<<"Enter expression:"<<endl;
cin>>z;
strcpy(s,z.c_str());
h=0;
for(i=0;i<strlen(s);i++){
    if(s[i]=='&')
     { b[h]='&';
       h++;
       }
    if(s[i]=='|')
     { b[h]='|';
       h++;
       }
}
p=1; q=1; j=0;
v=func(h,p,q,a,b,s);
if(v==1)
ct++;

p=1; q=0; j=0;
v=func(h,p,q,a,b,s);
if(v==1)
ct++;

p=0; q=1; j=0;
v=func(h,p,q,a,b,s);
if(v==1)
ct++;

p=0; q=0; j=0;
v=func(h,p,q,a,b,s);
if(v==1)
ct++;

cout<<"Got Truth value "<<ct<<" time(s)."<<endl;
if(ct==4)
cout<<"Your given compound proposition is a Tautology";
else if(ct==0)
cout<<"Your given compound proposition is a Contradiction";
else
cout<<"Your given compound proposition is a Contingency";
}
