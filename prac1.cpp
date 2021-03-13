#include <iostream>
//Currency Convertor
using namespace std;
int main()
{
    int pounds, pence, shillings;
    cout << "Enter the Pounds: ";
    cin >> pounds;
    cout << "Enter the Shillings: ";
    cin >> shillings;
    cout << "Enter the pence: ";
    cin >> pence;
    float totalpence;
    totalpence = (float)((shillings * 12) + pence) / 240;
    pence = totalpence * 100;
    cout << totalpence << endl;
    if (pence >= 100)
    {
        pounds = pounds + (pence / 100);
        pence = pence % 100;
    }
    cout << "Decimal Pound: " << pounds << "." << pence;
    return 0;
}