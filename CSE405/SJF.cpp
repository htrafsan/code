#include<iostream>
#include<algorithm>
using namespace std;

struct Sjf
{
    int ProcessNo;
    int ArrivalTime;
    int BurstTime;
};
struct output{
  int processId;
  int Start;
  int End;
};

bool acompare(Sjf lhs, Sjf rhs)
{
  return lhs.BurstTime < rhs.BurstTime;
}
bool bcompare(Sjf lhs, Sjf rhs)
{
  return lhs.ArrivalTime < rhs.ArrivalTime;
}

int main(){
   float noProcess,time = 0, TurnaroundTime,waitingTime = 0,TTime = 0, avgTurnaroudTime,timeDistance, initialTime=0, timeTaken[1000];
   float avgTime,totalWaiting = 0, tr = 0;
   int a=0, readyQueue[200], b = 0, waitingQueue[1000]={0};
   cout<<"Enter the number of process "<<endl;
   cin>>noProcess;
   Sjf arr[10000],brr[10000];
   output result[1000];
   cout<<"Enter Process No and Burst Time : \n";

   for(int i=0; i<noProcess; i++){
      cin>>arr[i].ProcessNo>>arr[i].ArrivalTime>>arr[i].BurstTime;
      readyQueue[arr[i].ProcessNo] = arr[i].ArrivalTime;
      timeTaken[arr[i].ProcessNo] = arr[i].BurstTime;
      //arr[i].ProcessNo = brr[i].ProcessNo; arr[i].ArrivalTime = brr[i].ArrivalTime; arr[i].BurstTime = brr[i].BurstTime;

   }

   sort(arr, arr+(int)noProcess, bcompare);

   timeDistance = arr[1].ArrivalTime -arr[0].ArrivalTime;
   arr[0].BurstTime -=timeDistance;
   int cnt = 2;
   initialTime = arr[1].ArrivalTime;
   cout<<arr[0].ProcessNo<<"  "<<arr[0].ArrivalTime<<"  "<<arr[1].ArrivalTime<<endl;

   result[a].processId = arr[0].ProcessNo; result[a].Start=arr[0].ArrivalTime; result[a].End = arr[1].ArrivalTime;

   while(cnt <noProcess){
      int Ltime = arr[cnt].ArrivalTime;
      timeDistance = Ltime - initialTime;
      sort(arr, arr+cnt, acompare);
      int c = 0;
      while(arr[c].BurstTime ==0){
         ++c;
      }
      cout<<arr[c].ProcessNo<<"   "<<initialTime<<"   "<<Ltime<<endl;

      if(result[a].processId != arr[c].ProcessNo){
      result[a].End = initialTime;
      result[++a].processId = arr[c].ProcessNo; result[a].Start = initialTime;
      }

      arr[c].BurstTime -=timeDistance;
      initialTime = Ltime;

      ++cnt;
   }
   result[a].End = initialTime;
int c = 0;
sort(arr, arr+(int)noProcess, acompare);
while(arr[c].BurstTime ==0){
    ++c;
}

for(int i=c; i<noProcess; i++){
   cout<<arr[i].ProcessNo<<"   "<<initialTime<<"   "<<initialTime + arr[i].BurstTime<<endl;
     if(result[a].processId != arr[i].ProcessNo){
      result[a].End = initialTime;
      result[++a].processId = arr[i].ProcessNo; result[a].Start = initialTime;
      }
   initialTime += arr[i].BurstTime;
}
result[a].End = initialTime;

cout<<"\n\n\n";
cout<<"process   start   end\n-------------------------------------------"<<endl;
for(int i=0; i<=a; i++){
  cout<<result[i].processId<<"         "<<result[i].Start<<"        "<<result[i].End<<endl;
}

for(int i=0; i<=a; i++){
  waitingQueue[result[i].processId] += (result[i].Start - readyQueue[result[i].processId]);
  readyQueue[result[i].processId] = result[i].End;
}
cout<<"\n\n\n";
cout<<"Waiting time and Turnaround time for the processes :"<<endl;
for(int i=1; i<=noProcess; i++){
  cout<<i<<"   "<<waitingQueue[i]<<"  "<<waitingQueue[i]+timeTaken[i]<< endl;
  tr += waitingQueue[i]+timeTaken[i];
  totalWaiting +=waitingQueue[i];
  }
  tr = tr/noProcess;

  avgTime = totalWaiting/noProcess;
  cout<<"average waiting time is "<<avgTime<<endl;
  cout<<"Average Turnaround time is : "<<tr<<endl;
  cout<<"Throughput is: "<<noProcess/TTime<<endl;
}

