/*
//class implementing queue in C++
//the same functionality as STL (Standard Template Library ) class queue in C++ 
//with usage example
//Version 1.1
Consists
a. Program template
b. defintion of class mqueue 
Author: Anna Jeżo  nick: Milesrat
 */
 
#include <iostream>
#include <vector>
using namespace std;

class mqueue {
public:
 mqueue() { 
    first = last = -1;
 } 
private:
 vector<int> elements;
 int first, last;
};	

int main() {
 mqueue	payments;
 mqueue	payments2;

 return 0;
}