// 0-250000-->0
// 250000-500000-->0.5
// 500000-750000-->0.10
// 750000-1000000-->0.15
// 1000000-1250000-->0.20
// 1250000-1500000-->0.25
//>1500000-->0.30

#include <iostream>
using namespace std;

int main()
{

    long income, tax, total;
    cout << "Enter Your Salary ";
    cin >> income;

    if (income <= 250000)
    {
        tax = income * 0;
        total = income - tax;
    }
    if (income > 250000 && income <= 500000)
    {
        tax = (income - 250000) * 0.05;
        total = income - tax;
    }

    if (income > 500000 && income <= 750000)
    {
        tax = (income - 500000) * 0.10 + (250000 * 0.05);
        total = income - tax;
    }

    if (income > 750000 && income <= 1000000)
    {
        tax = (income - 750000) * 0.15 + (250000 * 0.05) + (250000 * 0.10);
        total = income - tax;
    }

    if (income > 1000000 && income <= 1250000)
    {
        tax = (income - 1000000) * 0.20 + (250000 * 0.05) + (250000 * 0.10) + (250000 * 0.15);
        total = income - tax;
    }

    if (income > 1250000 && income <= 1500000)
    {
        tax = (income - 1250000) * 0.25 + (250000 * 0.05) + (250000 * 0.10) + (250000 * 0.15) + (250000 * 0.20);
        total = income - tax;
    }

    if (income > 1500000)
    {
        tax = (income - 1250000) * 0.30 + (250000 * 0.05) + (250000 * 0.10) + (250000 * 0.15) + (250000 * 0.20) + (250000 * 0.25);
        total = income - tax;
    }
    cout << "Your tax is " << tax << " and your final income is " << total;

    return 0;
}