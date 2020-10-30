//Name: Alexander Giaquinto & Karly DiSanto 
//Professor Helsing
//Operating Systems
//November 1, 2020
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
  //create the menu for the user to choose scenario number and scheduling algorithm
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
  
  //user can enter the seed value to generate random service times and memory requirements
        long long seedValue;
        cout << "Enter a seed value"
        cin >> seedValue;

 //generates based on scenario entered
   if (scenario == 1)
   {
     //FIFO using scenario 1
       printf("Hello World1");
   }
   else if (scenario == 2)
   {
     //SJF using scenario 1
       printf("Hello World2");
   }
   else if (scenario == 3)
   {
     //FIFO using scenario 2
       printf("Hello World3");
   }
   else if (scenario == 4)
    {
     //SJF using scenario 2
       printf("Hello World4");
    }
   else if (scenario == 5)
    {
     //FIFO using scenario 3
       printf("Hello World5");
    }
   else if (scenario == 6)
    {
     //SJF using scenario 3
       printf("Hello World6");
    }
   else if (scenario == 7)
    {
     //FIFO using scenario 4
       printf("Hello World7");
    }
   else if (scenario == 8)
    {
     //SJF using scenario 4
      printf("Hello World8");
    }
  }


