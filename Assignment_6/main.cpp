/////////////////////////////////////////////////////////////////////////
// Title: Assignment 6 - Aliens n Arrays
// Author: Zachary Carofanello
// CPET-321 Computational Problem Solving II Fall 2016
// Platform: CLion 2016.2.1
// Description: The problem with the aliens and other fun stuff
//
// Revisions:
// Revision 1.0 18/09/16
//
// To Do List:
// 1. Alien Problem
// 2. Checking arrays
// 3. I mean there's always something else to do
//
/////////////////////////////////////////////////////////////////////////
#include <iostream>

int * OddAndEvenCount (int Number2Check);

int main() {
    int UserNum;
    int *NumberCounts;
    
    //I'm not about rewite it to accept any number
    std::cout << "Enter a positive number" << std::endl;
    std::cin >> UserNum;
    
    //Function passes a pointer out
    NumberCounts = OddAndEvenCount(UserNum);
    
    //Essentially Manually indexing an array
    std::cout << "The number of even numbers are " << *(NumberCounts + 0) << std::endl;
    std::cout << "The number of odd numbers are " << *(NumberCounts + 1) << std::endl;
    system("Pause");
    return 0;
}

//Returns the count of odd and even numbers doesn't cout zero as odd or even
int * OddAndEvenCount (int Number2Check){
    //First index is Even and second is Odd
    static int OddAndEven[2] = {0, 0};

    //If it's zero don't bother doing the calculations
    if(Number2Check != 0) {
        if (Number2Check % 2 == 0) {
            OddAndEven[0] = Number2Check / 2;
            OddAndEven[1] = OddAndEven[0];
        } else {
            OddAndEven[1] = (Number2Check + 1) / 2;
            OddAndEven[0] = OddAndEven[1] - 1;
        }
    }
    return OddAndEven;
}
