//Size of the Datatypes
#include <iostream>
using namespace std;
int main()
{
    cout << "Size of short Integer: " << sizeof(short int) << "-bytes";
    cout << "\nSize of unsigned short Integer: " << sizeof(unsigned short int) << "-bytes";
    cout << "\nSize of Integer: " << sizeof(int) << "-bytes";
    cout << "\nSize of long Integer: " << sizeof(long int) << "-bytes";
    cout << "\nSize of long long Integer: " << sizeof(long long int) << "-bytes";
    cout << "\nSize of Float: " << sizeof(float) << "-bytes";
    cout << "\nSize of Double: " << sizeof(double) << "-bytes";
    cout << "\nSize of long Double: " << sizeof(long double) << "-bytes";
    cout << "\nSize of Character: " << sizeof(char) << "-bytes";
    cout << "\nSize of wchar_t: " << sizeof(wchar_t) << "-bytes";
    cout << "Hello World";
}