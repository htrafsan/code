#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cmath>
using namespace std;

char array[100][200],temp[100];
int c,n;
void first(int,int[]);
int function(int i,int j,int p[],int);
int main(void)
{
    int p[2],i,j;
    printf("Enter the no. of productions :");
    scanf("%d",&n);
    printf("Enter the productions :\n");
    for(i=0; i<n; i++)
        scanf("%s",array[i]);
    for(i=0; i<n; i++)
    {
        c=-1,p[0]=-1,p[1]=-1;
        first(i,p);
        printf("First(%c) : { ",array[i][0]);
        for(j=0; j<=c; j++)
            printf("%c,",temp[j]);
        printf("\b }.\n");
    }
}

int function(int i,int j,int p[],int key)
{
    int k;
    if(!key)
    {
        for(k=0; k<n; k++)
            if(array[i][j]==array[k][0])
                break;
        p[0]=i;
        p[1]=j+1;
        first(k,p);
        return 0;
    }
    else
    {
        for(k=0; k<=c; k++)
        {
            if(array[i][j]==temp[k])
                break;
        }
        if(k>c)return 1;
        else return 0;
    }
}
void first(int i,int p[])
{
    int j,k,key;
    for(j=2; array[i][j] != 0; j++)
    {
        if(array[i][j-1]=='/')
        {
            if(array[i][j]>= 'A' && array[i][j]<='Z')
            {
                key=0;
                function(i,j,p,key);
            }
            else
            {
                key = 1;
                if(function(i,j,p,key))
                    temp[++c] = array[i][j];
                if(array[i][j]== 'e'&& p[0]!=-1)
                {
                    if(array[p[0]][p[1]]>='A' && array[p[0]][p[1]] <='Z')
                    {
                        key=0;
                        function(p[0],p[1],p,key);
                    }
                    else if(array[p[0]][p[1]] != '/'&& array[p[0]][p[1]]!=0)
                    {
                        if(function(p[0],p[1],p,key))
                            temp[++c]=array[p[0]][p[1]];
                    }
                }
            }
        }
    }
}
