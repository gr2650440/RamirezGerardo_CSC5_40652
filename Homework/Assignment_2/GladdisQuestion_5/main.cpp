#include <iostream>

using namespace std;

        
int main()
{
    float male_stud, female_stud, total_stud;
    float male_per, female_per;
    
    cout << "Enter the number of male students registered in class: ";
    cin >> male_stud;
    cout << "Enther the number of females students registered in class: ";
    cin >> female_stud;
    
    total_stud = male_stud + female_stud;
    male_per = (male_stud/total_stud)*100;
    female_per = (female_stud/total_stud)*100;
    
    cout<<"The total number of students in class are " << total_stud << endl;
    cout<<"The male percentage in class is " << male_per << "%" << endl;
    cout<<"The female percentage in class is " << female_per << "%" << endl;
    
    
            
    
    
    

    return 0;
}

