
#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
    double replacement_cost, minimum_amount;
    cout<< "enter replacement cost of building: ";
    cin>> replacement_cost;
    minimum_amount = (replacement_cost*0.8);
    cout << "Minimum amout of insurance: " << minimum_amount << endl;
    

    return 0;
}

