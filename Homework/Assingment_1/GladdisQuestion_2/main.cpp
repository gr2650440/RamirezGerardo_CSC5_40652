/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Admin
 *
 * Created on January 8, 2018, 8:15 PM
 */
#include <iostream>

using namespace std;

int main() 
{
    // declare variables
    double percent;
    double totalSales;
    double east_cost_share;
    percent=0.58;
    totalSales= 8600000;
    // Calculate sales that east cost generates
    east_cost_share=percent*totalSales;
    cout << "Generating " << (percent*totalSales)<< " % of total sales,"
            " the East Coast division";
    cout << " generates $" << "this year." << endl;
     
    
    
    return 0;
}


