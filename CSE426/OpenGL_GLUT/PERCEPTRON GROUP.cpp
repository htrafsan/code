#include<iostream>
using namespace std;

int main()
{
    int a[4][2]={{0,0},{0,1},{1,0},{1,1}},m=4,n=2,flag=0,i,k,f=0;
    double w[2]={.2,.5};
    float new_w[2],new_class[2]={0,1},threshold=.4,temp[4][2]={0},desire_output[4]={0};
    float temp_sum[4]={0};
    for(i=0;i<m;i++)
    {
        flag++;
        i=f;
        for(int j=0;j<n;j++)
        {
            //cout<<w[i][j]<<"  ";
            temp[i][j]=(w[j])*(a[i][j]);
            //cout<<temp[i][j]<<"  ";
            temp_sum[i]=temp_sum[i]+temp[i][j];
        }
        //cout<<"\n";

         {if(((m/2)>i))
             {k=0;}
      else
                {k=1;}
         }
        if(temp_sum[i]<=threshold)
         {


             desire_output[i]=0;
         }
         else
         {
             desire_output[i]=1;
         }
        // for(int j=0;j<n;j++)
        int j=0;

     {
     if(new_class[k]==desire_output[i])

         {
             w[j]=w[j];
             w[j+1]=w[j+1];
             f++;
         }
          else if((new_class[k]==1) && (desire_output[i]==0))

         {
             w[j]=w[j]+a[i][j];
              w[j+1]=w[j+1]+a[i][j+1];


         {if(((m/2)>i))
             {f=(m/2);}
      else
                {f=0;}
         }
              //f=0;
               cout<<"\n Up: "<< w[i]<<" again i="<<i;

         }
                   else if((new_class[k]==0) && (desire_output[i]==1))

         {
             w[j]=w[j]-a[i][j];
             w[j+1]=w[j+1]-a[i][j+1];
            // f=0;
                     {if(((m/2)>i))
             {f=(m/2);}
      else
                {f=0;}
         }
             cout<<"\n Down: "<< w[i];
         }
         }
 cout<<"\n"<<" new i= "<<i<<"  class= "<<desire_output[k];
 cout<<"\n\n\nw1= "<<w[i]<<" w2= "<<w[i+1];
    }
    cout<<"\nNumber of iteration:"<<flag;
    cout<<"\nWeighted matrix:";
    i=0;
    for(i=0;i<n;i++)
    {
        cout<<"\n"<< w[i];
    }


}
