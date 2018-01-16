
#include <iostream>

using namespace std;

int main(int argc, char** argv) 
{
    double mealCharge, tax, tip, totalBill;
    mealCharge =  88.67;
    tax = (6.75*mealCharge)/100;
    tip = 20*(mealCharge + tax)/100;
    totalBill= mealCharge+tip+tax;
    
    cout << "\n Restaurant Bill:\n" << endl;
    cout << " Meal Cost = $" << mealCharge << endl;
    cout << "Tax amount = $" << tax<< endl;
    cout << "Tip amount = $" << tip<< endl;
    cout <<  "Total Bill = $" << totalBill << endl;
    
    
    

    return 0;
}

