// A student will not be allowed to sit in exam if his/her attendence is less than 75%.
// Take following input from user
// Number of classes held
// Number of classes attended.
// And print
// percentage of class attended
// Is student is allowed to sit in exam or not.

// Modify the above question to allow student to sit if he/she has medical cause. Ask user if he/she has medical cause or not ( 'Y' or 'N' ) and print accordingly.

#include <iostream>
using namespace std;

int main()
{
    int total_classes, attended_classes;
    char med;
    cout << "Enter the number of classes held : " << endl;
    cin >> total_classes;
    cout << "Enter the number of classes attended : " << endl;
    cin >> attended_classes;
    double attendance_percentage;
    attendance_percentage = (attended_classes * 100 / total_classes);
    cout << "Attendance Percentage of the student is : " << attendance_percentage << endl;
    if (attendance_percentage >= 75)
    {
        cout << "Student is allowed to sit in the Exam." << endl;
    }
    else
    {
        cout << "Does he/she have any medical cause, answer in Y/N " << endl;
        cin >> med;
        if (med == 'Y')
        {
            cout << "Student is allowed to sit in the Exam." << endl;
        }
        else
        {
            cout << "Student is not allowed to sit in the Exam." << endl;
        }
    }

    return 0;
}