/*Ceaser Chiper Encryption & Decryption*/
#include<iostream>
#include<string.h>
using namespace std;
void decrypt(char decrypted[],int m,int length)
{
    int i,j;
        for(i=0;i<length;i++)
        {
             if(isalpha(decrypted[i]))
             {
                 for(j=0;j<m;j++)
                 {
                     if(decrypted[i]=='a')
                     {
                        decrypted[i]='z';
                     }
                     else
                     {
                        decrypted[i]--;
                     }
                 }
    }
  }
  cout<<"The decrypted message is:   "<<decrypted<<"\n";
}
int main()
{
    cout<<"Enter the input message:-\n";
    char inmsg[1000],encrypted[1000];
    int i, j, length,choice,m,x=0;
    cin.getline(inmsg,100);
    length = strlen(inmsg);
    cout<<"Enter total bit shifted/key"<<endl;
    cin>>m;
    for(i=0;i<length;i++)
         {
             if(isalpha(inmsg[i]))
             {
                 inmsg[i]=tolower(inmsg[i]);
                 for(j=0;j<m;j++)
                 {
                    if(inmsg[i]=='z')
                    {
                        inmsg[i]='a';
                    }
                    else
                    {
                        inmsg[i]++;
                    }
                 }
             }
            encrypted[x]=inmsg[i];
            x++;
         }
    cout<<"The encrypted message is:   "<<encrypted<<"\n";
    decrypt(encrypted,m,length);
}

