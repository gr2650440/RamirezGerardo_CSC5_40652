
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double testScore1, testScore2, testScore3, testScore4, testScore5;
    double sumOfTestScores, averageTestScore;
    
    cout << "Enter test score 1: " ;
    cin >> testScore1;
    cout << "Enter test score 2: ";
    cin >> testScore2;
    cout << "Enter test score 3: ";
    cin >> testScore3;
    cout << "Enter test score 4: ";
    cin>> testScore4;
    cout << "Enter test score 5: ";
    cin>> testScore5;
   
    sumOfTestScores = testScore1 + testScore2 + testScore3 + testScore4 + testScore5;
    averageTestScore = (sumOfTestScores/5) ;
    
    cout << "The average test score is: " << fixed << setprecision(1) << averageTestScore << endl;
    
    system("pause");
    
    

    return 0;
}

