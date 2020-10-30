
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
    if(!processor1.isEmpty() || !processor2.isEmpty() || !processor3.isEmpty() || !processor4.isEmpty()) {
       
    }
  }
  //if they are not full then pop the next process in the queue and add it to the next available processor
  
}
