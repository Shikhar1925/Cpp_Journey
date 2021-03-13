#include <iostream>
//Currency Convertor
using namespace std;
int main()
{
    int pounds, pence, shillings, totalpence;
    cout << "Enter the Pounds: ";
    cin >> pounds;
    cout << "Enter the Shillings: ";
    cin >> shillings;
    cout << "Enter the pence: ";
    cin >> pence;
    float totalpound;
    totalpound = (float)((shillings * 12) + pence) / 240;
    totalpence = totalpound * 100;
    cout << totalpound << endl;
    if (totalpence >= 100)
    {
        pounds = pounds + (totalpence / 100);
        totalpence = totalpence % 100;
    }
    cout << "Decimal Pound: " << pounds << "." << totalpence;
    return 0;
}