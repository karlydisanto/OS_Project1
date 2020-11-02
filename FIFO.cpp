//Passing processor objects each algorithm
// #include<processor1>
// #include<processor2>
// #include<processor3>
// #include<processor4>
#include<iostream>
#include<queue>
#include "processor.h"
#include "FIFO.h"
using namespace std;

//false = the processor is not full
//true = the processor is full
bool P1 = false
bool P2 = false;
bool P3 = false;
bool P4 = false;

//creating processors from the processor struct
processor p1;
processor p2;
processor p3;
processor p4;

//passing memory and speed requirements based on different scenarios
void FIFO(int mem1, int mem2, int mem3, int mem4, int speed1, int speed2, int speed3, int speed4, queue<int> p, queue<int> m, queue<long long> sT, long turnaround, long waiting){
  while(!p.empty()){ 
    //check if all of the processors are full
    if(!P1 && !P2 && !P3 && !P4) {
      //WAIT FOR THE REAMINING TIME TO BE 0 in order for the processor to be empty again
      //if there is still time remaining, then add to the turnaround time and the waiting time
      if(p1.timeRemaining > 0) {
        long long service = sT.front();
        waiting = waiting + 1;
        turnaround = turnaround + service
      }
      else {
      //otherwise, there is no time remaining and open the processor back up
        P1 = false;
      }
      //same for processor 2
      if(p2.timeRemaining > 0) {
        long long service = sT.front();
        waiting = waiting + 1;
        turnaround = turnaround + service;
      }
      else {
        P2 = false;
      }
      //same for processor 3
      if(p3.timeRemaining > 0) {
        long long service = sT.front();
        waiting = waiting + 1;
        turnaround = turnaround + service
      }
      else  {
        P3 = false;
      }
      //same for processor 4
      if(p4.timeRemaining > 0) {
        long long service = sT.front();
        waiting = waiting + 1;
        turnaround = turnaround + service
      }
      else { 
        P4 = false;
      }
    }
    
    else {
   //if any of the processors are empty pop the next process off the queue into that processor
        if(P1) {
   //create a temp which holds the current process and its info at the front
           int pNumber = p.front();
   //get the memory size to check if it fits in the processor
           int memSize = m.front();
           long long servTime = sT.front();
   //compare the mem size of the process and the processor (to see if the process fits in the processor)
           if(memSize <= mem1) {
            turnaround += sT.front();
   //output the current process number, service time, and memory
            cout << "Process number: " << "\t" << pNumber;
            cout << "Service time:" << "\t" << servTime;
            cout << "Memory Requirement" << "\t" << memSize;
   //pop the process off the queue so it is no in the processor
            p.pop();
            m.pop();
            sT.pop();
   //set the status of the processor to full until the process is complete
            P1 = true;  
           }
        }
   //P2 works the same as the P1
        else if(P2) {
           int pNumber = p.front();
           int memSize = m.front();
           long long servTime = sT.front();
           if(memSize <= mem2) {
            turnaround += sT.front();
            processID = p.front().getpid();
            cout << "Process number: " << "\t" << pNumber;
            cout << "Service time:" << "\t" << servTime;
            cout << "Memory Requirement" << "\t" << memSize;
            p.pop();
            m.pop();
            sT.pop();
            P2 = true;
           } 
        }
     //P3 works the same as P1
        else if(P3) {
           int pNumber = p.front();
           int memSize = m.front();
           long long servTime = sT.front();
           if(memSize <= mem3) {
            turnaround += sT.front();
            processID = p.front().getpid();
            cout << "Process number: " << "\t" << pNumber;
            cout << "Service time:" << "\t" << servTime;
            cout << "Memory Requirement" << "\t" << memSize;
            p.pop();
            m.pop();
            sT.pop();
            P3 = true;
           } 
        }
      //P4 works the same as P1
        else if(P4) {
           int pNumber = p.front();
           int memSize = m.front();
           long long servTime = sT.front();
           if(memSize <= mem4) {
            turnaround += sT.front();
            processID = p.front().getpid();
            cout << "Process number: " << "\t" << pNumber;
            cout << "Service time:" << "\t" << servTime;
            cout << "Memory Requirement" << "\t" << memSize;
            p.pop();
            m.pop();
            sT.pop();
            P4 = true;
           } 
        }  
    }
  }
  //Outputs the data
  cout << "Total turnaround time" << turnaround;
  cout << "Total wait time" << waiting;
  cout << "Average turnaround" << turnaround/40;
  cout << "Average waiting" << waiting/40;
  
}
