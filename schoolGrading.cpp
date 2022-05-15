
// A school has following rules for grading system:
// a. Below 25 - F
// b. 25 to 45 - E
// c. 45 to 50 - D
// d. 50 to 60 - C
// e. 60 to 80 - B
// f. Above 80 - A
// Ask user to enter marks and print the corresponding grade.

#include <iostream>
using namespace std;

int main()
{
    int marks;
    cout << "Enter Your marks : ";
    cin >> marks;
    if (marks < 25)
    {
        cout << "Your Grade is F";
    }
    if (marks >= 25 && marks < 45)
    {
        cout << "Your Grade is E";
    }
    if (marks >= 45 && marks < 50)
    {
        cout << "Your Grade is D";
    }
    if (marks >= 50 && marks < 60)
    {
        cout << "Your Grade is C";
    }
    if (marks >= 60 && marks < 80)
    {
        cout << "Your Grade is B";
    }
    if (marks >= 80)
    {
        cout << "Your Grade is A";
    }
    return 0;
}