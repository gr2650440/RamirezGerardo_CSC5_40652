
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double costA=15, costB=12, costC=9;
    double ticketA, ticketB, ticketC;
    double total_income;
    
    cout << "Enter the number of tickets of Class A: ";
    cin >> ticketA;
    cout << "Enter the number of tickets of Class B: ";
    cin >> ticketB;
    cout << " Enter the number of tickets of Class C: ";
    cin >> ticketC;
    
    cout << setprecision(2) <<fixed;
    cout << "The income from Class A:$ " << ticketA*costA <<endl;
    cout << "The income from Class B:$ " << ticketB*costB << endl;
    cout << "The income from Class C: $ "<< ticketC*costC << endl;
    
    total_income = (ticketA*costA) + (ticketB*costB) + (ticketC*costC);
    cout << "The total income generated: $ " << total_income<<  endl;
    system("pause");
    
    

    return 0;
}

