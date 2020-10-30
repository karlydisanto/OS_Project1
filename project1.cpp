//Name: Alexander Giaquinto & Karly DiSanto 
//Professor Helsing
//Operating Systems
//October 30th 2020
//Project 1 Schedule Simulator 

#include <iostream>
using namespace std;

int scenario = 0;
void menu();

int main(){
  cout << endl;
  menu();
}

//MENU

void menu ()
   {
        cout << endl;
        cout << " Please Choose One of the Following: \n";
        cout << " 1. Scenario 1 Using FIFO\n";
        cout << " 2. Scenario 1 Using SJF\n";
        cout << " 3. Scenario 2 Using FIFO\n";
        cout << " 4. Scenario 2 Using SJF\n";
        cout << " 5. Scenario 3 Using FIFO\n";
        cout << " 6. Scenario 3 Using SJF\n";
        cout << " 7. Scenario 4 Using FIFO\n";
        cout << " 8. Scenario 4 Using SJF\n";
        cin >> scenario;

   if (scenario == 1)
   {
       printf("Hello World1");
   }
   else if (scenario == 2)
   {
       printf("Hello World2");
   }
   else if (scenario == 3)
   {
       printf("Hello World3");
   }
   else if (scenario == 4)
    {
       printf("Hello World4");
    }
   else if (scenario == 5)
    {
       printf("Hello World5");
    }
   else if (scenario == 6)
    {
       printf("Hello World6");
    }
   else if (scenario == 7)
    {
       printf("Hello World7");
    }
   else if (scenario == 8)
    {
      printf("Hello World8");
    }
  }


