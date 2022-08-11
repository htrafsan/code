#include<stdio.h>
#include<string.h>
int main()
{
    char ch[10];
    int i,j,k=0,l,p,x,sum=0,y,sum1=0,sum2=0,sum3=0,sum4=0,sum5=0,sum6=0,c,count=0,dom;
    int a[10];
    printf("Enter your function f(x)=");
    gets(ch);
    l=strlen(ch);
    printf("How many Domain:");
    scanf("%d",&dom);
    for(j=0; j<dom; j++)
    {
        sum=0,sum1=0,sum2=0,sum3=0,sum4=0,sum5=0,sum6=0,c=0;
        printf("The value of x=");
        scanf("%d",&x);
        for(i=0; i<l; i++)
        {
            if(ch[i]=='x'&&ch[i+1]=='x')
            {
                sum+=x*x;
                sum1=sum;
                sum=0;
            }
            else if(ch[i]=='x'&&ch[i-1]!='x') //|| ch[i+1]!='x'))
            {
                sum3+=x;
            }
            else if(ch[i]=='+'&&ch[i+1]=='x')
            {
                sum4+=x;
                sum6=sum4-x;
            }
            else if(ch[i]=='-'&&ch[i+1]=='x')
            {
                sum5-=x;
                sum6=sum5-x;
            }
            else if(ch[i]=='+')
            {
                sum2+=ch[i+1]-48;
            }
            else if(ch[i]=='-')
            {
                sum2-=ch[i+1]-48;
            }
        }
        c=sum1+sum2+sum3+sum6;
        printf("For %d F(x)=%d\n",x,c);
        a[k]=c;
        k++;
    }
    for(i=0; i<k; i++)
        printf("%d ",a[i]);
    for(i=0; i<k; i++)
    {
        for(j=i+1; j<k; j++)
            if(a[i]==a[j])
            {
                count++;
                break;
            }
    }
    if(count==0)
        printf("\nThe function is one to one");
    else
        printf("\nThe function is onto");
    return 0;
}
