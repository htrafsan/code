#include<iostream>
using namespace std;
int main()
{
    int a,burst_time[50],waiting_time[50];
    float average_time=0;
    cout<<"Enter the No. Of process: ";
    cin>>a;
    for(int i=0;i<a;i++)
      {
          cout<<endl<<"Enter The Burst time of P"<<i<<"->";
          cin>>burst_time[i];
      }
      cout<<endl;


      for(int i=0;i<a;i++)
      {
           cout<<"Waiting Time of P"<<i<<"->";

           waiting_time[i]=waiting_time[i-1]+burst_time[i-1];
           waiting_time[0]=0;
           average_time=average_time+waiting_time[i];
           cout<<waiting_time[i]<<endl;
       }

       cout<<endl;
       cout<<"Average Waiting Time: ";
       average_time=average_time/a;
       cout<<average_time;

      return 0;
}


