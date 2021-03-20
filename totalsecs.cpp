#include <iostream>
using namespace std;
class time
{
private:
    int h, m, s;

public:
    int gettime()
    {
        cout << "Enter the Hours: ";
        cin >> h;
        cout << "Enter the Minutes: ";
        cin >> m;
        cout << "Enter the Seconds: ";
        cin >> s;
        cout << "Your Time is " << h << ":" << m << ":" << s << endl;
        long totalsecs = h * 3600 + m * 60 + s;
        return (totalsecs);
    }
    void showtime(long seconds)
    {
        cout << "Total Seconds in the Time: " << seconds;
    }
};
int main()
{
    long sec;
    time t1;
    sec = t1.gettime();
    t1.showtime(sec);
}