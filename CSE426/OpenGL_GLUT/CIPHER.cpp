#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    cout<<"Enter the input message:\n";
    char inmsg[1000];
    int i, j, length,choice;
    cin.getline(inmsg,100);
    length = strlen(inmsg);
    cout<<"Enter your choice \n1. Encrypt \n2. Decrypt \n";
    cin>>choice;
    if(choice==1)
    {
         for(i=0;i<length;i++)
         {
             if(isalpha(inmsg[i]))
             {
                 inmsg[i]=tolower(inmsg[i]);
                 for(j=0;j<3;j++)
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
         }
         cout<<"The encrypted message is \""<<inmsg<<"\"\n";
    }
    else if (choice == 2)
    {
        for(i=0;i<length;i++)
        {
             if(isalpha(inmsg[i]))
             {
                 inmsg[i]=tolower(inmsg[i]);
                 for(j=0;j<3;j++)
                 {
                     if(inmsg[i]=='a')
                     {
                        inmsg[i]='z';
                     }
                     else
                     {
                        inmsg[i]--;
                     }
                 }
            }
       }
    cout<<"The decrypted message is \""<<inmsg<<"\"\n";
    }
}
