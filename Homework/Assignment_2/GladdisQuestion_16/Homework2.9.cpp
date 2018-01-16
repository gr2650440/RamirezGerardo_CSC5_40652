
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double actual, rate, assess, tax, payment;
    cout<<"Enter property value: ";
    cin >> actual;
    cout<< "Enter the tax rate: ";
    cin >> rate;
    
    assess = actual*.6-5000;
    tax = (assess*rate)/100;
    payment = tax/4;
    
    cout<<"The Annual Property Tax: $ " << setprecision(2) << fixed <<tax<<endl;
    cout<<"The Quarterly Tax Payment: $ "<< setprecision(2)<< fixed <<payment<<endl; 
          

    return 0;
}

