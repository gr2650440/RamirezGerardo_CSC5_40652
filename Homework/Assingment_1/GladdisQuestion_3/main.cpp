

/* 
 * File:   main.cpp
 * Author: Gerardo Ramirez
 *
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
    double purchase = 95;
    double state = 0.04*purchase;
    double country = 0.02*purchase;
    double amount = purchase+state+country;
    cout << "purchase Price :$" << purchase;
    cout << "\n State tax: $" << state;
    cout << "\n Country tax: $"<< country;
    cout << "\n amount: $" << amount << "\n";
    
    
    
    return 0;
}

