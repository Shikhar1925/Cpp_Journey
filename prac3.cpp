#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int a, b;
    char opera, choice, operation;
    cout << "Do you want to Play with Calculator(y/n): ";
    cin >> choice;
    if (choice == 'y')
    {
        opera = 0;
        while (opera != 'n')
        {
            cout << endl
                 << "Enter the First Number: ";
            cin >> a;
            cout << "Enter the Second Number: ";
            cin >> b;
            cout << "Which Operator do you want to choose(+,-,*,/): ";
            cin >> operation;
            switch (operation)
            {
            case '+':
                cout << "Addtion is " << a + b << endl;
                break;
            case '-':
                int high, low;
                high = (a > b) ? a : b;
                if (high == a)
                {
                    low = b;
                }
                else
                {
                    low = a;
                }
                cout << "Subtraction between " << high << "-" << low << " is " << high - low << endl
                     << "Subtraction occurs between bigger number-Smaller number.";
                break;
            case '*':
                cout << "Multiplication is " << a * b << endl;
                break;
            case '/':
                high = (a > b) ? a : b;
                if (high == a)
                {
                    low = b;
                }
                else
                {
                    low = a;
                }
                if (high % low == 0)
                {
                    cout << "Division between " << high << " and " << low << " is " << high / low << endl;
                }
                else
                {
                    cout << "Your Division from " << high << "/" << low << endl
                         << "Your Quotient is " << high / low << endl
                         << "Your Remainder is " << high % low << endl;
                }
                break;
            default:
                cout << "Invalid Operation.";
                break;
            }
            cout << "Do you want to take calculation Again(y/n): ";
            cin >> opera;
        }
    }
    else
    {
        if (choice == 'n')
        {
            cout << "You are Fool." << endl
                 << "You have to Played Once.";
        }
    }
}