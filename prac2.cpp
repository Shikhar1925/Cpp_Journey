#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int x = 0, y = 0;
    char dir;
    cout << "Press Enter to Quit: ";
    while (dir != '\r')
    {
        cout << endl
             << "Your Location is X= " << x << " and Y= " << y << endl;
        cout << "Press any Direction(n,s,e,w): ";
        dir = getche();
        if (dir == 'n')
        {
            y++;
        }
        else
        {
            if (dir == 's')
            {
                y--;
            }
            else
            {
                if (dir == 'e')
                {
                    x++;
                }
                else
                {
                    x--;
                }
            }
        }
    }
}