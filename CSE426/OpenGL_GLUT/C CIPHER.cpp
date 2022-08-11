#include<stdio.h>
#include<string.h>
#include<iostream>
#include<conio.h>
 char df(char arr2[]);
using namespace  std;
int main()
{

    char arr2[200];
    gets(arr2);
    df(arr2);}
    char df(char arr2[]){
    int n,i,j,len=0,key=0,temp=0,s,ss;
    n=strlen(arr2);
    //scanf("%d",&key);
    for(j=1;j<=26;j++){
            key=j;
    for(i=0; i<n; i++)
    {
        if(arr2[i]==' ')
            arr2[i]=' ';
        else if(arr2[i]>='a' && arr2[i]<='z')
        {

        len=(int)(arr2[i]);
        temp=len-key;
            if(temp<97)
            {
                s=len-96;
                ss=key-s;
                len=122-ss;
                arr2[i]=(char)(len);
            }
            else
            {
                arr2[i]=(char)(temp);
            }
        }
         else if(arr2[i]>='A' && arr2[i]<='Z')
        {

        len=(int)(arr2[i]);
        temp=len-key;
            if(temp<65)
            {
                s=len-64;
                ss=key-s;
                len=90-ss;
                arr2[i]=(char)(len);
            }
            else
            {
                arr2[i]=(char)(temp);
            }
        }

 else if(arr2[i]>='0' && arr2[i]<='9')
        {

        len=(int)(arr2[i]);
        temp=len-key;
            if(temp<48)
            {
                s=len-47;
                ss=key-s;
                len=57-ss;
                arr2[i]=(char)(len);
            }
            else
            {
                arr2[i]=(char)(temp);
            }
        }
    }

puts(arr2);}
}
