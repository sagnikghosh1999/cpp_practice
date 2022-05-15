// A shop will give discount of 10% if the cost of purchased quantity is more than 1000.
// Ask user for quantity
// Suppose, one unit will cost 100.
// Judge and print total cost for user.

#include <iostream>
using namespace std;

int main()
{
    double qty, cost = 100;
    double discount = 0.10;
    cout << "Enter the quantity: ";
    cin >> qty;
    double total = qty * cost;

    if (total > 1000)
    {
        total = total - (total * discount);
    }
    cout << "Your Total cost will be " << total;
    return 0;
}