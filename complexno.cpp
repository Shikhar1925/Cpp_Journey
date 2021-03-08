#include <iostream>
using namespace std;
class complex
{
private:
    int real;
    float img;

public:
    void getdata()
    {
        cout << "Enter the real part: ";
        cin >> real;
        cout << "Enter the Imaginary part: ";
        cin >> img;
    }
    void displaydata()
    {
        cout << "Complex Number: " << real << "+" << img << "i" << endl
             << endl;
    }
    complex add(complex x)
    {
        complex temp;
        temp.real = real + x.real;
        temp.img = img + x.img;
        return (temp);
    }
    void adddisplay()
    {
        cout << "Addition of two Complex Numbers: " << real << "+" << img << "i";
    }
};
int main()
{
    complex c1, c2, c3;
    cout << "Addtion of Two Complex Numbers:- " << endl;
    c1.getdata();
    c1.displaydata();
    c2.getdata();
    c2.displaydata();
    c3 = c1.add(c2);
    c3.adddisplay();
}