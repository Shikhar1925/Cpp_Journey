#include <iostream>
using namespace std;
//Prime Factors of a Numbers
void primecheck(int x)
{
    int flag;
    for (int i = 1; i <= x; i++)
    {
        flag = 1;
        if (x % i == 0)
        {
            for (int j = 2; j < i; j++)
            {
                if (i % j == 0)
                {
                    flag = 0;
                    break;
                }
            }
            if (flag == 1 && i != 1)
            {
                cout << i << " ";
            }
        }
    }
}
int main()
{
    int n;
    cout << "Enter the Number: ";
    cin >> n;
    primecheck(n);
}