
//Passing processor objects each algorithm
#include<processor1>
#include<processor2>
#include<processor3>
#include<processor4>
#include<iostream>
#include<queue>

//false = the processor is not full
//true = the processor is full
boolean P1 = false
boolean P2 = false;
boolean P3 = false;
boolean P4 = false;


//passing memory and speed requirements based on different scenarios
void FIFO(int mem1, int mem2, int mem3, int mem4, int speed1, int speed2, int speed3, int speed4, queue<int> p, queue<int> m, queue<long long> sT){
  long long processesCompleted = 0;
  while(!p.empty())){
//check if all of the processors are full
    if(!P1 && !P2 && !P3 && !P4) {
       //DO SOMETHING
    }
    else {
//if any of the processors are empty pop the next process off the queue into that processor
        if(P1) {
//create a temp which holds the current process at the front
           int pNumber = p.front();
//get the memory size to check if it fits in the processor
           int memSize = m.front();
           long long servTime = sT.front();
//compare the mem size of the process and the processor (to see if the process fits in the processor)
           if(memSize <= mem1) {
            p.pop();
            m.pop();
            sT.pop();
            P1 = true; 
             
           }
        }
        else if(P2) {
 //create a temp which holds the current process at the front
           int pNumber = p.front();
//get the memory size to check if it fits in the processor
           int memSize = m.front();
           long long servTime = sT.front();
//compare the mem size of the process and the processor (to see if the process fits in the processor)
           if(memSize <= mem1) {
            p.pop();
            m.pop();
            sT.pop();
            P2 = true;
           } 
        }
        else if(P3) {
//create a temp which holds the current process at the front
           int pNumber = p.front();
//get the memory size to check if it fits in the processor
           int memSize = m.front();
           long long servTime = sT.front();
//compare the mem size of the process and the processor (to see if the process fits in the processor)
           if(memSize <= mem1) {
            p.pop();
            m.pop();
            sT.pop();
            P3 = true;
           } 
        }
        else if(P4) {
//create a temp which holds the current process at the front
           int pNumber = p.front();
//get the memory size to check if it fits in the processor
           int memSize = m.front();
           long long servTime = sT.front();
//compare the mem size of the process and the processor (to see if the process fits in the processor)
           if(memSize <= mem1) {
            p.pop();
            m.pop();
            sT.pop();
            P4 = true;
           } 
        }  
    }
  }
}
