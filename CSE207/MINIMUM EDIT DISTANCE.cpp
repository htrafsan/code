#include<cstdio>
#include<cstring>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    char str1[100],str2[100];
    int T[100][100];
    gets(str1);
    gets(str2);
    for(int k=0; k<strlen(str1)+1; k++)
    {
        T[0][k]=k;
    }
    for(int k=0; k<strlen(str2)+1; k++)
    {
        T[k][0]=k;
    }
    for(int i=1; i<strlen(str2)+1; i++)
    {
        for(int j=1; j<strlen(str1)+1; j++)
        {
            if(str1[i-1]==str2[j-1])
            {
                T[i][j]=T[i-1][j-1];
            }
            else
            {
                T[i][j]=min(T[i][j-1],T[i-1][j]);
                T[i][j]=min(T[i][j],T[i-1][j-1]);
                T[i][j]++;
            }
        }
    }

    for(int i=0; i<strlen(str2)+1; i++)
    {
        for(int j=0; j<strlen(str1)+1; j++)
        {
            printf("%d",T[i][j]);
        }
        printf("\n");
    }
}
