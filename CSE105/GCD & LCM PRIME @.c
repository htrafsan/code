#include<stdio.h>
#include<math.h>
int min(int a,int b){
    if(a<b)
        return a;
    else
        return b;
}
int max(int a,int b){
    if(a>b)
        return a;
    else
        return b;
}
void main(){
    int a,b,c,i=2,j=0,k,l,p,q,count,m,n,x=0,y,gcd=1,lcm=1,element[10],base1[10],power1[10],base2[10],power2[10],base3[10],power3[10],power4[10];
    printf("Enter 1st element:");
    scanf("%d",&a);
    printf("Enter 2nd element:");
    scanf("%d",&b);
    printf("Prime factorials of %d : ",a);
    c=a;
    do{
        if(c%i==0){
            element[j]=i;
            printf("%d ",i);
            c=c/i;
            j++;
        }
        else
            i++;
    }while(c!=1);
    base1[0]=element[0];
    k=0;
    for(p=0;p<j;p++){
        for(q=k;q>=0;q--){
            if(base1[k]!=element[p]){
                k++;
                base1[k]=element[p];
            }
        }
    }
    l=0;
    for(p=0;p<=k;p++){
        count=0;
        for(q=0;q<j;q++){
            if(base1[p]==element[q])
                count++;
        }
        power1[l]=count;
        l++;
    }
    printf("\nPrime factorials of %d : ",b);
    c=b;
    i=2;
    j=0;
    do{
        if(c%i==0){
            element[j]=i;
            printf("%d ",i);
            c=c/i;
            j++;
        }
        else
            i++;
    }while(c!=1);
    base2[0]=element[0];
    m=0;
    for(p=0;p<j;p++){
        for(q=k;q>=0;q--){
            if(base2[m]!=element[p]){
                m++;
                base2[m]=element[p];
            }
        }
    }
    n=0;
    for(p=0;p<=m;p++){
        count=0;
        for(q=0;q<j;q++){
            if(base2[p]==element[q])
                count++;
        }
        power2[n]=count;
        n++;
    }
    q=0;
    for(p=0;p<=k;p++){
        while(q<=m){
            count=0;
            for(y=0;y<x;y++)
                if(base1[p]==base3[y])
                    count++;
            if(count==0){
                if(base1[p]==base2[q]){
                    base3[x]=base1[p];
                    power3[x]=power1[p];
                    power4[x]=power2[q];
                    x++;
                    break;
                }
                if(base1[p]!=base2[q]){
                    base3[x]=base1[p];
                    power3[x]=power1[p];
                    power4[x]=0;
                    x++;
                    break;
                }
            }
        }
        q++;
    }
    for(q=0;q<=m;q++){
        count=0;
        for(y=0;y<x;y++)
            if(base2[q]==base3[y])
                count++;
        if(count==0){
            for(p=0;p<=k;p++){
                if(base2[q]!=base1[p]){
                    base3[x]=base2[q];
                    power3[x]=0;
                    power4[x]=power2[q];
                    x++;
                    break;
                }
            }
        }
    }
    printf("\n");
    printf("\n\n");
    for(y=0;y<x;y++)
        gcd=gcd*floor(pow(base3[y],min(power3[y],power4[y])));
    printf("GCD of %d and %d is %d\n\n",a,b,gcd);
    for(y=0;y<x;y++)
        lcm=lcm*floor(pow(base3[y],max(power3[y],power4[y])));
    printf("LCM of %d and %d is %d\n",a,b,lcm);
}
