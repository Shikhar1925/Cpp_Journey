#include <iostream>
using namespace std;
int main()
{
    int a, b, n;
    char ch;
    cout << "Calculator Program" << endl;
    // Programm to make the Calculator.
    while (ch != 'N')
    {
        cout << "Enter +the First Number: ";
        cin >> a;
        cout << "Enter the Second Number: ";
        cin >> b;
        cout << endl;
        cout << "1.Addition" << endl;
        cout << "2.Subtraction" << endl;
        cout << "3.Multiplication" << endl;
        cout << "4.Division" << endl;
        cout << "Choose your Choice: ";
        cin >> n;
        switch (n)
        {
        case 1:
            cout << "Addition of " << a << " and " << b << " is " << a + b << endl
                 << endl;
            break;
        case 2:
            cout << "Subtraction of " << a << " and " << b << " is " << a - b << endl
                 << endl;
            break;
        case 3:
            cout << "Multiplication of " << a << " and " << b << " is " << a * b << endl
                 << endl;
            break;
        case 4:
            cout << "Division od " << a << " and " << b << " is " << a / b << endl
                 << endl;
            break;

        default:
            cout << "Invalid Number";
            break;
        }
        cout << "Do you want to again Calculate ? (Y or N): ";
        cin >> ch;
    }
}