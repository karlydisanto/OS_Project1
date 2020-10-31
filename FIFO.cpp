
//Passing processor objects to the different algorithm
#include<processor1>
#include<processor2>
#include<processor3>
#include<processor4>
#include<iostream>
#include<queue>


//passing memory and speed requirements based on different scenarios
void FIFO(int mem1, int mem2, int mem3, int mem4, int speed1, int speed2, int speed3, int speed4, queue<long long> processes){
  long long processesCompleted = 0;
  while(processesCompleted != processes.size()){
//check if any of the processors are not empty (full)
    if(processor1.isFull()) && processor2.isFull() && processor3.isFull() || processor4.isFull()) {
       //DO SOMETHING
    }
    else {
//if any of the processors are empty pop the next process off the queue into that processor
        if(processor1.isEmpty()){
           processes.pop();
        }
        else if(processor2.isEmpty(){
           processes.pop(); 
        }
        else if(processor3.isEmpty(){
           processes.pop(); 
        }
        else if(processor4.isEmpty(){
           processes.pop(); 
        }
         
    }
  }
}
