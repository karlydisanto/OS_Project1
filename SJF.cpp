//#include<processor1>
//#include<processor2>
//#include<processor3>
//#include<processor4>
#include<iostream>
#include<queue>
#include "processor.h"
#include "SJF.h"
#include "process.h"

using namespace std;

void SJF(int mem1, int mem2, int mem3, int mem4, int speed1, int speed2, int speed3, int speed4, process[] proc, int[] turnaround, long[] waiting) {
//loop through the number of processes
    for(i=0;i<40;i++)
    {
        pos=i;
        for(j=i+1;j<n;j++)
        {
//compare the service time of the process in the current position and the next position
//if the service time of next is greater than the one of the current, then set the position = to next
            if(serviceTime[j]<serviceTime[pos])
                pos=j;
        }
//create a temp process of shortest service time
        temp=serviceTime[i];
//set the service time of the shortest into the correct position of the process objects
        serviceTime[i]=serviceTime[pos];
        serviceTime[pos]=temp;
        temp=proc[i];
        proc[i]=proc[pos];
        proc[pos]=temp;
    }
   
    waiting[0] = 0;            
    for(i=1;i<40;i++)
    {
        waiting[i]=0;
        for(j=0;j<i;j++)
            waiting[i]+= serviceTime[j];
  
        long totalWait += waiting[i];
    }
  
    averageWT=(long)totalWait/40;      
    long totalTurn=0;
  

    for(i=0;i<40;i++)
    {
        turnaround[i]=serviceTime[i]+waiting[i];   
        totalTurn+=turnaround[i];
    }
  
    averageTurn=totalTurn/40;    
    cout<< "Total turnaround time: \t" << totalTurn;
    cout << "Total wait time: \t" << totalWait;
    cout << "Average turnaround time: \t" << averageTurn;
    cout << "Average wait time:" << averageWT;
}
