#include<stdio.h>
#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;
int main()
{
    char ex[500];
    string prev,next,oper;
    while(1)
    {
        bool flag = true;
        bool flagIF = false;
        bool flagELSE = false;
        printf("\nEnter IF Else Expression : ");
        gets(ex);
        int exLen = strlen(ex);
        char start;
        string prev,str;

        for( int i  = 0; i<exLen; i++ )
        {
            if(ex[i] == 'f')
            {
                if(i!= 0 and ex[i-1]=='i')
                {
                    prev = "if";
                    flagIF = true;
                    flagELSE = false;
                }
            }
            else if(ex[i]=='e')
            {
                if(i>2 and ex[i-1]=='s' and ex[i-2]=='l' and ex[i-3]=='e')
                {
                    if(!flagIF)
                    {
                        flag = false;
                    }
                }
            }
        }
        if(flag)
            printf("Valid ");

        else
            printf("Invalid");

    }
}

