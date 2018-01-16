

#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char** argv)
{
    double radians, y,x,z;
    cout<< "Enter the radians ";
    cin>> radians;
    y=sin(radians);
    x=cos(radians);
    z= tan(radians);
    cout<< "Sin angle "<< y << endl;
    cout<<"Cos angle "<< x << endl;
    cout<<"Tan angle " <<z<< endl;
    
    

    return 0;
}

