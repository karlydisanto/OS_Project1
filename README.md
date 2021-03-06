# OS_Project1
Project 1 for Operating systems 

Karly DiSanto and Alex Giaquinto

This project is a C++ program that siumlates a scheduler. The simulator contains 4 processors and 40 processes to be scheduled. There are four different scenarios in which the memory requirements and speed requirements of the 4 processors change. The user of the program can choose what scheduling algorithm they want to be done, FIFO or SFJ. From there the service time and memory capacity of the processes are generated randomly also based on the user's input. 

## Usage
This C++ program uses the g++ compiler. In order to compile this simulator you must perform the following command. 


![Image of Compiler](https://github.com/karlydisanto/OS_Project1/blob/main/compile.png)

In order to execute the file, you must use the ./a.out file along with the filename as shown below.


![Image of Executer](https://github.com/karlydisanto/OS_Project1/blob/main/execute.png)


Program is run through the main file and the user is prompted to enter a scenario (1,2,3,4) and choice of algorithm (FIFO or SJF)

![Image of Scenario](https://github.com/karlydisanto/OS_Project1/blob/main/chooseScenario.png)


The user then inputs a seed value to randomly populate the processes queues (memory requirements and service time)


![Image of Seed](https://github.com/karlydisanto/OS_Project1/blob/main/seedValue.png)


