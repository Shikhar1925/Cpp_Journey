#include <iostream>
using namespace std;
class bookshop
{
private:
    static float price;
    char name[30];
public:
    float getinput()
    {
        char ch;
        float sum = 0;
        while (ch != 'N')
        {
            cout << "Enter the Name of the Book: ";
            fflush(stdin);
            gets(name);
            takeprice();
            sum = sum + price;
            cout << "Do you want to take the another book (Y or N): ";
            cin >> ch;
            cout << endl;
            if (ch == 'N')
            {
                return (sum);
            }
        }
    }
    static void takeprice()
    {
        cout << "Enter the Price from your Choice for the Book: ";
        cin >> price;
    }
    void totalprice(float price)
    {
        cout << "Total Price for your books is : " << price << endl;
    }
};
float bookshop::price;
int main()
{
    bookshop b1;
    float total;
    total = b1.getinput();
    b1.totalprice(total);
}