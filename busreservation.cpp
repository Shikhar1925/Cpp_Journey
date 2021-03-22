#include <iostream>
#include <string.h>
#include <stdio.h>
#include <conio.h>
#include <cstdlib>
using namespace std;
//Bus Reservation System
static int p;
class bus
{
private:
    //Declaring the Members Variables.
    char busno[10], drivername[20], from[20], to[20], deptime[10], exparrtime[10], onestop[20], seat[10][5][10];

public:
    //Declaring the Member Functions
    void Register();
    void reservation();
    void showbus();
    void empty();
    void busstatus();
    void location(int m);
};
bus b1[10];
//Defining thee Member Funtions.
void bus::Register() //Register your bus name First
{
    cout << "Your Bus Number: ";
    cin >> b1[p].busno;
    cout << "The Driver Name: ";
    cin >> b1[p].drivername;
    cout << "The Starting Point of the Journey: ";
    cin >> b1[p].from;
    cout << "Departure Time of Bus: ";
    cin >> b1[p].deptime;
    cout << "The Ending Point of the Journey: ";
    cin >> b1[p].to;
    cout << "Expected Reached Time of Bus: ";
    cin >> b1[p].exparrtime;
    cout << "The Rest Place in between the Journey: ";
    cin >> b1[p].onestop;
    b1[p].empty();
    p++;
}
void bus::reservation() //Reserving the Seat in the Bus
{
    int seat;
    char num[10];
above:
    cout << "Enter the Bus No. in Which you Reserve your Seat: ";
    cin >> num;
    int i;
    for (i = 0; i <= p; i++)
    {
        if (strcmp(b1[i].busno, num) == 0)
            break;
    }
    while (i <= p)
    {
        cout << "\nSeat Number: ";
        cin >> seat;
        if (seat > 50)
        {
            cout << "\nTotal Number of Seats in Buses are 50 seats.";
        }
        else
        {
            if (strcmp(b1[i].seat[seat / 10][(seat % 10) - 1], "Empty") == 0)
            {
                cout << "Passenger Name: ";
                cin >> b1[i].seat[seat / 10][(seat % 10) - 1];
            }
            else
            {
                cout << "The Seat Number is Reserved.";
            }
        }
    }
    if (i > p)
    {
        cout << "You have entered the Wrong Bus No.\nKindly enter the Right Bus no.\n";
        goto above;
    }
}
void design(char ch) //Create Design Pattern in the Bus Enteries
{
    for (int c = 0; c < 100; c++)
    {
        cout << ch;
    }
}
void bus::showbus()
{
    int j;
    char num[5];
    cout << "Enter that Bus No.,Which you need to see details: ";
    cin >> num;
    for (int j = 0; j <= p; j++)
    {
        if (strcmp(b1[j].busno, num) == 0)
            break;
    }
    while (j <= p)
    {
        design('-');
        cout << "\nBus No.:  " << b1[j].busno << "\t\tDriver Name:  " << b1[j].drivername << endl
             << "From: " << b1[j].from << "\tTo: " << b1[j].to << "\tDep. Time: " << b1[j].deptime << endl;
        design('-');
        b1[0].location(j);
        int z = 1;
        for (int m = 0; m < 10; m++)
        {
            for (int n = 0; n < 5; n++)
            {
                z++;
                if (strcmp(b1[j].seat[m][n], "Empty") != 0)
                {
                    cout << "\nThe seat number " << (z - 1) << " is reserved for " << b1[j].seat[m][n] << ".";
                }
            }
        }
        break;
    }
    if (j > p)
    {
        cout << "Enter the Right Bus Number.";
    }
}
void bus::empty()
{
    for (int y = 0; y < 10; y++)
    {
        for (int g = 0; g < 5; g++)
        {
            strcpy(b1[p].seat[y][g], "Empty");
        }
    }
}
void bus::location(int m)
{
    int s = 0, p = 0;
    for (int i = 0; i < 10; i++)
    {
        cout << "\n";
        for (int j = 0; j < 5; j++)
        {
            s++;
            if (strcmp(b1[m].seat[i][j], "Empty") == 0)
            {
                cout.width(5);
                cout.fill(' ');
                cout << s << ". ";
                cout.width(10);
                cout.fill(' ');
                cout << b1[m].seat[i][j];
                p++;
            }
            else
            {
                cout.width(5);
                cout.fill(' ');
                cout << s << ". ";
                cout.width(10);
                cout.fill(' ');
                cout << b1[m].seat[i][j];
            }
        }
    }
    cout << "\n\nThere are " << p << " seats empty in the Bus No.: " << b1[m].busno;
}
void bus::busstatus()
{
    for (int e = 0; e < p; e++)
    {
        design('-');
        cout << "\nBus No.:  " << b1[e].busno << "\t\tDriver Name:  " << b1[e].drivername << endl
             << "From: " << b1[e].from << "\tTo: " << b1[e].to << "\tDep. Time: " << b1[e].deptime << endl;
        design('-');
    }
}
int main()
{
    int c;
    cout << "\n\n\n\t\t\t\tWelcome to the Online Bus Reservaion System\n\t\t\t\t"
         << "Here is no Bus Entry, So First You have to Register Your Bus\n\t\t\t\t";
    design('*');
    cout << "\n\t\t\t\t\tHappy and Safe Journey\n\t\t\t\t";
    design('*');
    while (1)
    {
        cout << "\n\n\t\t\t\t1.Register your Bus\n\t\t\t\t"
             << "2.Reserve your Seat\n\t\t\t\t"
             << "3.Show Buses Entries\n\t\t\t\t"
             << "4.Buses Status\n\t\t\t\t"
             << "5.Exit\n\t\t\t\t"
             << "Enter your choice: ";
        cin >> c;
        switch (c)
        {
        case 1:
            b1[p].Register();
            break;
        case 2:
            b1[p].reservation();
            break;
        case 3:
            b1[0].showbus();
            break;
        case 4:
            b1[0].busstatus();
            break;
        case 5:
            exit(0);
            break;

        default:
            cout << "Enter the Correct Choice.";
            break;
        }
    }
    return 0;
}