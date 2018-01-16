
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string month1, month2, month3;
    double month1_RainFall, month2_RainFall, month3_RainFall, average;
    
    cout<< "Enter first month name: ";
    cin >> month1;
    cout<<"Enter " <<month1<< " of rainfall in inches: ";
    cin >> month1_RainFall;
    cout<< "Enter second month name: ";
    cin >> month2;
    cout<< "Enter" << month2 << "of rainfall in inches: ";
    cin >> month2_RainFall;
    cout<< "Enter third month name: ";
    cin >> month3;
    cout<< "Enter"<< month3 << "of rainfall inches: ";
    cin >> month3_RainFall;
    
    average = (month1_RainFall + month2_RainFall + month3_RainFall)/3;
    cout << "the average monthly rain fall for" << month1 << "," << month2 << " and " << month3 << " was "<< average << "inches" << endl;

    return 0;
}

