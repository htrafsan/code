#include<stdio.h>
#include<string.h>
int main()
{
    char arr[100],arr2[100],arr3[100],tempch;
    int i,j,k,l,n=0,len2=0,track[100];
    printf("Enter string: ");
    gets(arr);
    n=strlen(arr);
    printf("You have total lettre: %d\n",n);
    for(i=0;i<n;i++)
    {
    for(j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j]){
                tempch=arr[i];
                arr[i]=arr[j];
                arr[j]=tempch;
            }
        }
    }
    for(i=0;i<n;i++)
        printf("%c",arr[i]);
    for(k=0;k<n;k++)
    {
        if(arr[k]!=arr[k+1])
        {
            arr2[len2]=arr[k];
            len2++;
        }
    }
    printf("Unique letters:\n");
    for(l=0;l<len2;l++){
    printf("%c\n",arr2[l]);
    }
}
