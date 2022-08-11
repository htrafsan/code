#include<iostream>
using namespace std;

int main()
{
    int a[4][2]={{0,0},{0,1},{1,0},{1,1}},m=4,n=2;
    float w[2]={.2,0.5};
    float new_w[2],new_class[2]={0,1},threshold=.4,temp[4][2],desire_output[4];
    float temp_sum[4]={0};

    cout<<"The input matrix:\n";
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<a[i][j]<<"  ";
        }
        cout<<"\n";
    }
cout<<"\nThe weighted matrix:\n";
    for(int i=0;i<n;i++)
    {

        {
            cout<<w[i];
        }
        cout<<"\n";
    }

    //This is weight Training section


    cout<<"\nThis is  Training section \n";

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            //cout<<w[i][j]<<"  ";
            temp[i][j]=(w[j])*(a[i][j]);
            cout<<temp[i][j]<<"  ";
            temp_sum[i]=temp_sum[i]+temp[i][j];
        }

        cout<<"\n";
    }
    cout<<"\nWeighted sum:";
    for(int i=0;i<m;i++)
    {
        cout<<"\n"<< temp_sum[i];
    }

    //-----------------------comparison section-------------------

   // cout<<"\n\ncomparison with threshold:";
      for(int i=0;i<m;i++)
    {
         if(temp_sum[i]<=threshold)
         {
             desire_output[i]=0;
         }
         else
         {
             desire_output[i]=1;
         }

    }

        cout<<"\n\ncalculated class:";
    for(int i=0;i<m;i++)
    {
        cout<<"\nRow"<<i+1<<" =  Class "<< desire_output[i];
    }
    /* for(int i=0;i<m;i++)
     {


        for(int j=0;j<n;j++)
    {
        if((i<(m/2))//&&(desire_output[i]==new_class[0]))
        for(int i=0;;i++)
        {
          new_w[i][j]=w[i][j];
        }
        else
        {
          new_w[i][j]=w[i][j]-a[i][j];
        }
    }
     }
cout<<"\nThe weight matrix:\n";
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<new_w[i][j]<<"  ";
        }
        cout<<"\n";
    }
*/
}
