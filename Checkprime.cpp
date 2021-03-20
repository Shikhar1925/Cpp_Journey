#include <iostream>
//Checking the whether a number can be express as sum of two Prime Numbers.
using namespace std;
int checkprime(int a)
{
    int flag, k;
    if (a == 0)
    {
        return (0);
    }
    else if (a == 1)
    {
        return (1);
    }
    for (int k = 2; k < a; k++)
    {
        flag = 1;
        if (a % k == 0)
        {
            flag = 0;
            break;
        }
    }
    if (flag == 1)
    {
        return (a);
    }
    else
    {
        return (0);
    }
    
}
void addprime(int p)
{
    int i, j, a, b, sum = 0;
    for (i = 0; i <= p / 2; i++)
    {
        a = checkprime(i);
        if (a % 2 == 1)
        {
            for (j = 0; j <= p; j++)
            {
                b = checkprime(j);
                if (b % 2 == 1)
                {
                    sum = i + j;
                    if (sum == p)
                    {
                        cout << p << " = " << a << " + " << b << endl;
                    }
                }
            }
        }
    }
}
int main()
{
    int n, cat;
    cout << "Enter the Number: ";
    cin >> n;
    addprime(n);
}