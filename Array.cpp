#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "How many elements you want to Enter: ";
    cin >> n;
    int arr[n], *ptr = arr;
    cout << "Enter the " << n << " Elements of array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> *(ptr + i);
    }
    int min, max;
    max = min = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (*(ptr + i) > max)
        {
            max = *(ptr + i);
        }
        if (*(ptr + i) < min)
        {
            min = *(ptr + i);
        }
    }
    cout << "Maximum Element of the Array is : " << max << endl;
    cout << "Minimun Element of the Array is : " << min;
}