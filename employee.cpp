#include <iostream>
using namespace std;
class employee
{
private:
    int empid;
    float salary;

public:

    employee()
    {
        cout << "Enter the your ID: ";
        cin >> empid;
        cout << "Enter your Salary in figures of Thousands: ";
        cin >> salary; //Salary is in Rupees
        cout << endl;
    }
    float calallowance()
    {
        int hra, da;
        float gs;
        if (salary > 10000) //HRA and DA are in Percentage
        {
            hra = 25;
            da = 30;
        }
        else if (salary > 5000)
        {
            hra = 15;
            da = 20;
        }
        else
        {
            hra = 5;
            da = 10;
        }
        gs = salary + (hra * salary) / 100 + (da * salary) / 100;
        return (gs);
    }
    void showallowance(float sal)
    {
        cout << "Your Total Salary for member ID " << empid << " is : Rs." << sal;
    }
};
int main()
{
    float total;
    employee e1;
    total = e1.calallowance();
    e1.showallowance(total);
}