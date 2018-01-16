
#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
    float cent, fahr;
    
    cout<< "What is the Celsius Temperature: ";
    cin>> cent;
    fahr = (9/5)*cent +32;
    cout<< cent << " Degrees Celsius equals " << fahr;
    cout<< " degrees Fahrenhiet" << endl;
    

    return 0;
}

