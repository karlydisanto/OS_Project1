//#include<processor1>
//#include<processor2>
//#include<processor3>
//#include<processor4>
#include<iostream>
#include<queue>
#include "processor.h"
#include "SJF.h"
using namespace std;

void SJF(int mem1, int mem2, int mem3, int mem4, int speed1, int speed2, int speed3, int speed4, queue<int> p, queue<int> m, queue<long long> sT, long int turnaround, long int waiting) {
  int process1 = p.front();
  int process2 = p.back();
  long long servTime1 = sT.front();
  long long servTime2 = sT.back();
  bool compare = false;
  
  if(servTime1 > servTime2) {
    compare == false;
  }
  else {
   compare == true; 
  }
  
  sort(servTime1, servTime2, );
}
