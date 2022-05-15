// A company decided to give bonus of 5% to employee if his/her year of service is more than 5 years.
// Ask user for their salary and year of service and print the net bonus amount.

#include <iostream>
using namespace std;

int main()
{

    int yearsOfService;
    double sal, bonus = 0.0;
    cout << "Enter your years of service " << endl;
    cin >> yearsOfService;
    cout << "Enter Your Salary : " << endl;
    cin >> sal;
    if (yearsOfService > 5)
    {
        bonus = sal * 0.05;
    }
    cout << "Your Bonus amount is :" << bonus;

    return 0;
}