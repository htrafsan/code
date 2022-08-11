#include<iostream>
#include<algorithm>
using namespace std;
struct Rr
{
    int ProcessNo;
    int BurstTime;
};
struct output
{
    int processId;
    int Start;
    int End;
};
int main(void)
{
    float noProcess,timeQuantam, Time = 0, readyQueue[1000] = {0}, waitingQueue[1000] = {0},totalWaiting = 0,avgTime;
    cout<<"Enter the number of process "<<endl;
    cin>>noProcess;
    Rr arr[10000], brr[1000];
    output result[1000];
    cout<<"Enter Process No and Burst Time : \n";
    for(int i=0; i<noProcess; i++)
    {
        cin>>arr[i].ProcessNo>>arr[i].BurstTime;
        //arr[i].ProcessNo = brr[i].ProcessNo;    arr[i].BurstTime = brr[i].BurstTime;
    }
    cout<<"Enter time quantam "<<endl;
    cin>>timeQuantam;
    int m = noProcess - 1;
    for(int i=0; i<=m; i++)
    {
        if(arr[i].BurstTime>timeQuantam)
        {
            arr[++m].ProcessNo = arr[i].ProcessNo;
            arr[m].BurstTime = arr[i].BurstTime - timeQuantam;
            arr[i].BurstTime = timeQuantam;
        }
    }
    for(int i=0; i<=m; i++)
    {
        result[i].processId = arr[i].ProcessNo;
        result[i].Start = Time;
        result[i].End = Time + arr[i].BurstTime;
        //cout<<arr[i].ProcessNo<<"   "<<Time<<"  "<<Time + arr[i].BurstTime<<endl;
        Time += arr[i].BurstTime;
    }
    for(int i=0; i<=m; i++)
    {
        waitingQueue[result[i].processId] += (result[i].Start - readyQueue[result[i].processId]);
        readyQueue[result[i].processId] = result[i].End;
    }
    cout<<"\n\n\n";
    cout<<"Waiting time for the processes :"<<endl;
    for(int i=1; i<=noProcess; i++)
    {
        cout<<i<<"   "<<waitingQueue[i]<<endl;
        totalWaiting +=waitingQueue[i];
    }
    avgTime = totalWaiting/noProcess;
    cout<<"average waiting time is "<<avgTime<<endl;
    cout<<"Throughput is: "<<noProcess/Time<<endl;
}
