

#include <iostream>

using namespace std;

int main()
{
    float gallons, miles, mpg;
    cout << " Endter the number of gallons the car can hold ";
    cin >> gallons;
    cout << "Enter the number of miles driven on a full tank of gas ";
    cin >> miles;
    mpg = (miles/gallons);
    cout << "Capacity of fuel tank of the car : " << gallons << "gallons" << endl;
    cout << " Miles driven by car : " <<miles<< "miles" << endl;
    cout << "Milage of the car : " << mpg << "per gallon" <<endl;
    
    

    return 0;
}

