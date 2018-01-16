
#include <iostream>
#include <iomanip>

using namespace std;

int main() 
{
    float preCookieSugar= 0.03125;
    float preCookieflour= 0.0572917;
    float preCookiebutter= 0.02083333;
    float sugar, flour, butter;
    int cookies;
    
    cout<<"How many cookies do you want to make? ";
    cin >> cookies;
    
    sugar= preCookieSugar*cookies;
    flour= preCookieflour*cookies;
    butter= preCookiebutter*cookies;
    
    cout<<"Ingredients required for making "<< cookies<< " cookies are" << endl;
    cout<< setprecision(3);
    
    cout<< sugar<< "Cups of Sugar"<<endl;
    cout<< flour<< "Cups of flour"<<endl;
    cout<< butter<< "Cups of butter"<<endl; 
    
    return 0;
}

