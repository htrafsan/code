# include<iostream>
using namespace std;
int main()
{

int slice,i,j,m,wt[10],st[10],et[10],n,tat[10],pt[10],a[10],twt=0,ttat=0;
float avgwt,avgtat;
char p[10][10];
cout<<"enter no of process";
cin>>n;
for(i=0;i<n;i++)
{
cout<<"Enter the name of process:";
cin>> p[i];
cout<<"\n Enter the burst time:";
cin>>pt[i];
}
cout<<"Enter the time-slice:";
cin>>slice;
st[0]=0;
i=0;
do
{
if(pt[i]<=slice)
{
et[i]=st[i]+pt[i];
pt[i]=0;
tat[i]=et[i];
}
else
{
    et[i]=st[i]+slice;
pt[i]=pt[i]-slice;
}
wt[i]=st[i];
st[i+1]=et[i];
i=i+1;
}
while(i<n);
 m=n-1;
j=0;
a[m]=1234;
do{
    for(i=0;i<n;i++)
    {
if(pt[i]==0)
{
    tat[i]=tat[i];
    }
else
{
    st[m+1]=et[m];
 a[m+1]=i;
if(pt[i]<=slice)
{
    et[m+1]=st[m+1]+pt[i];
pt[i]=0;
tat[i]=et[m+1];
}
else
{
    et[m+1]=st[m+1]+slice;
pt[i]=pt[i]-slice;
}
if(a[m]==a[m+1])
    {
    wt[i]=wt[i]+0;
    }
else
{
    wt[i]+=st[m+1]-et[i];
    }
    m=m+1;
    }

}
if(pt[j]!=0)continue;
j=j+1;
}
while(j<n);
cout<<"\n name"<<"\t waiting time"<<"\t turn aroun time";
for(i=0;i<n;i++)
{
    cout<<"\n"<<p[i]<<"\t\t"<<wt[i]<<"\t\t"<<tat[i]<<"\n";
twt+=wt[i];
ttat+=tat[i];
}
  avgwt=(float) (twt)/n;
 avgtat= (float)(ttat)/n;
cout<<"\n Average waiting time:"<<avgwt;
cout<<"\n Average turn around time:"<<avgtat;
return 0;
}
