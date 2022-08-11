#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
void mul(char *start,char *end,char *per){
    char start_ch[200],end_ch[200];
    strcpy(start_ch,start);
    strcpy(end_ch,end);
    strrev(end_ch);
    strrev(start_ch);
    int fl=strlen(start_ch),sl=strlen(end_ch);
    for(int i=0;i<fl+sl;i++) per[i]='0';
    per[fl+sl]='\0';
    int r=-1,i,j;
    for(i=0;i<sl;i++){
    int hold=0;
        for(j=0;j<fl;j++)
        {
            int temp=(start_ch[j]-'0')*(end_ch[i]-'0')+hold+per[i+j]-'0';
            per[i+j]=temp%10+'0';
            hold=temp/10;
            if(i+j>r) r=i+j;
        }
        while(hold)
        {
            int temp=hold+ per[i+j]-'0';
            hold=temp/10;
            per[i+j]=temp%10+'0';
            if(i+j>r) r=i+j;
            j++;
        }
    }
    for(;r>0&&per[r]=='0';r--);
    per[r+1]='\0';
    strrev(per);
}
void toString(int n,char *num)
{
    int i=0;
    if(n==0)
    {
        num[0]='0';
        num[1]='\0';
    }
    while(n)
    {
        num[i++]=n%10+'0';
        n/=10;
    }
     num[i]='\0';
    strrev(num);
}
int main()
{
    int n,r,i;
    char s[200],e[200],per[200];
    cout<<"Enter n & r = ";
    cin>>n>>r;
    toString(n,s);
    for(i=n-1;i>n-r;i--)
    {
        toString(i,e);
        mul(s,e,per);
        strcpy(s,per);
    }
    cout<<n<<"P"<<r<<" = "<<per;
    return 0;
}
