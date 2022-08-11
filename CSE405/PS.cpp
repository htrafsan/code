#include<iostream>
#include<algorithm>
using namespace std;

struct Ps
{
    int ProcessNo;
    int Priority;
    int BurstTime;
};

bool acompare(Ps lhs, Ps rhs)
{
    if(lhs.Priority == rhs.Priority)
        return lhs.BurstTime < rhs.BurstTime;
     else
       return lhs.Priority < rhs.Priority;
}

int main(){
float noProcess,time = 0, TurnaroundTime,waitingTime = 0,TTime = 0, avgTurnaroudTime;
   float avgTime;
   cout<<"Enter the number of process "<<endl;
   cin>>noProcess;
   Ps arr[10000];
   cout<<"Enter Process No Burst Time and Priority  : \n";

   for(int i=0; i<noProcess; i++){
      cin>>arr[i].ProcessNo>>arr[i].BurstTime>>arr[i].Priority;
   }
   sort(arr, arr+(int)noProcess, acompare);


   cout<<"Process    Start   End   Turnaround Time\n-----------------------------------------"<<endl;
   for(int i=0; i<noProcess; i++){
      TTime = time + arr[i].BurstTime;
      waitingTime = time + waitingTime;
      TurnaroundTime = TurnaroundTime + TTime;

      cout<<arr[i].ProcessNo<<"           "<<time<<"     "<<TTime<<"       "<<TTime<<endl;
      time += arr[i].BurstTime;

   }

   avgTime = waitingTime/noProcess;
   avgTurnaroudTime = TurnaroundTime/noProcess;
   cout<<"Average waiting time is "<<avgTime<<"\nAverage turnaround time is  "<<avgTurnaroudTime<<endl;
   cout<<"Throughput is: "<<noProcess/TTime<<endl;
}
