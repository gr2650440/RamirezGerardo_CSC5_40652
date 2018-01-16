
#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
    double item1=15.95, item2=24.95, item3=6.95,item4=12.95, item5=3.95;
    double SubTotal, SalesTax, Total;
    SubTotal= item1+item2+item3+item4+item5;
    SalesTax= SubTotal*0.07;
    Total= SalesTax+ SubTotal;
    cout << " Item 1 = $ " << item1<< endl;
    cout << " Item 2 = $ " << item2<< endl;
    cout << " Item 3 = $ " << item3<< endl;
    cout << " Item 4 = $ " << item4<< endl;
    cout << " Item 5 = $ " << item5<< endl;
    
    cout << " SubTotal = $ " << SubTotal << endl;
    cout << "SalesTax = $ " << SalesTax<< endl;
    cout << "Total = $" << Total << endl;
    
    return 0;
}

