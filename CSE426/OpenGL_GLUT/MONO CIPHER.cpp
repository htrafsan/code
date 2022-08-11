#include<stdio.h>
#include<string.h>
#include<iostream>
using namespace std;
int main()
{
    char arr[1000],arr2[1000],tempch;
    int i,j,k,l,q,n=0,len2=0,count_ltr=1,cont[500],indx=0;
    float percent[500],temp=0;
    printf("Enter string: ");
    gets(arr);
    n=strlen(arr);
    printf("You have total lettre: %d\n",n);
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(arr[i]>arr[j])
            {
                tempch=arr[i];
                arr[i]=arr[j];
                arr[j]=tempch;
            }
        }
    }
    for(l=0; l<n; l++)
    {
        if(arr[l]==arr[l+1])
        {
            count_ltr++;
        }
        else
        {
            cont[indx]=count_ltr;
            count_ltr=1;
            indx++;
        }
    }
    for(k=0; k<n; k++)
    {
        if(arr[k]!=arr[k+1])
        {
            arr2[len2]=arr[k];
            len2++;
        }
    }
    for(i=0; i<indx; i++)
    {
        temp=cont[i];
        temp=temp/n;
        temp=temp*100;
        percent[i]=temp;
        temp=0;
    }
    printf("Unique letters:\n");
    for(l=1; l<len2; l++)
    {
        printf("%c=%.2f\n",arr2[l],percent[l]);
    }
    for(i=1; i<len2; i++)
    {
        if(percent[i]>=12.702)
            arr2[i]='e';
        else if(percent[i]<12.702 && percent[i]>=9.056)
            arr2[i]='t';
        else if(percent[i]>=8.167 && percent[i]<9.056)
            arr2[i]='a';
        else if(percent[i]>=7.507 && percent[i]<8.167)
            arr2[i]='o';
        else if(percent[i]>=6.997 && percent[i]<7.507)
            arr2[i]='i';
        else if(percent[i]>=6.749 && percent[i]<6.997)
            arr2[i]='n';
        else if(percent[i]>=6.327 && percent[i]<6.749)
            arr2[i]='s';
        else if(percent[i]>=6.094 && percent[i]<6.327)
            arr2[i]='h';
        else if(percent[i]>=5.987 && percent[i]<6.094)
            arr2[i]='r';
        else if(percent[i]>=4.253 && percent[i]<5.987)
            arr2[i]='d';
        else if(percent[i]>=4.025 && percent[i]<4.253)
            arr2[i]='l';
        else if(percent[i]>=2.782 && percent[i]<4.025)
            arr2[i]='c';
        else if(percent[i]>=2.758 && percent[i]<2.782)
            arr2[i]='u';
        else if(percent[i]>=2.406 && percent[i]<2.758)
            arr2[i]='m';
        else if(percent[i]>=2.360 && percent[i]<2.406)
            arr2[i]='w';
        else if(percent[i]>=2.228 && percent[i]<2.360)
            arr2[i]='f';
        else if(percent[i]>=2.015 && percent[i]<2.228)
            arr2[i]='g';
        else if(percent[i]>=1.974 && percent[i]<2.015)
            arr2[i]='y';
        else if(percent[i]>=1.929 && percent[i]<1.974)
            arr2[i]='p';
        else if(percent[i]>=1.492 && percent[i]<1.929)
            arr2[i]='b';
        else if(percent[i]>=0.978 && percent[i]<1.492)
            arr2[i]='v';
        else if(percent[i]>=0.772 && percent[i]<0.978)
            arr2[i]='k';
        else if(percent[i]>=0.153 && percent[i]<0.772)
            arr2[i]='j';
        else if(percent[i]>=0.150 && percent[i]<0.153)
            arr2[i]='x';
        else if(percent[i]>=0.095 && percent[i]<0.150)
            arr2[i]='q';
        else if(percent[i]>=0.074 && percent[i]<0.095)
            arr2[i]='z';
        printf("Attacking %d time:",i);
        puts(arr2);

    }
}
