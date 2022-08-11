#include<stdio.h>
#include<string.h>
#include<iostream>
#include<conio.h>
char* Encrypt(char arra[],int key);
char* Decrypt(char arr2[],int hit);
using namespace  std;
//////////////////////////////////////////
int main()
{
    char arr[200];
    char *ch,*ch2;
    int i,j,key,asint;

    cout<<"Message:";
    gets(arr);
    cout<<"Key value(0-25):";
    cin>>key;
    ch=Encrypt(arr,key);
    cout<<"Encrypted Message:\n";
    puts(ch);
    cout<<"\n\n\nDecrpted Message:"<<endl;
    for(j=0; j<26; j++)
    {
        ch2=Decrypt(ch,j);
        printf("Key=%d  ",j);
        //puts(ch2);
    }
}
////////////////////////////////////////////////
char * Encrypt(char arra[],int key)
{
    char arrd[200];
    int n,i,j=0,len=0;
    n=strlen(arra);

    for(i=0; i<n; i++)
    {
        len=(int)(arra[i]);
        len=len+key;
        if(arra[i]==' ')
            arra[i]=' ';
        else if(arra[i]>='a' && arra[i]<='z')
        {
            if(len>122)
            {
                len=(len%122)+96;
                arra[i]=(char)(len);
            }
            else
            {
                arra[i]=(char)(len);
            }
        }
        else  if(arra[i]>='A' && arra[i]<='Z')
        {
            if(len>90)
            {
                len=(len%90)+64;
                arra[i]=(char)(len);
            }
            else
            {
                arra[i]=(char)(len);
            }
        }
        else  if(arra[i]>='0' && arra[i]<='9')
        {
            if(len>57)
            {
                len=(len%57)+47;
                arra[i]=(char)(len);
            }
            else
            {
                arra[i]=(char)(len);
            }
        }
    }
    return arra;
}
////////////////////////////////////////////////
char *Decrypt(char arr2[],int hit)
{
    int n,i,len=0,key=0,temp=0,s,ss;
    n=strlen(arr2);
    key=hit;
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
    puts(arr2);
    return arr2;
}
////////////////////////////////////////////
