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

void SJF(int mem1, int mem2, int mem3, int mem4, int speed1, int speed2, int speed3, int speed4, queue<int> p, queue<int> m, queue<long long> sT, long int turnaround, long int waiting) {
    int min_val; 
    for (int i = 0; i < 40; i++) 
    { 
        int currProc = p.front(); 
        int currsT = sT.front();
        int currMem = m.front();
        p.pop();
        sT.pop();
        m.pop();
        if (i != min_index) 
            sT.push(curr); 
        else
            min_val = curr; 
    } 
    sT.push(min_val);
}
