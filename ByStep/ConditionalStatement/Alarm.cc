#include <iostream>

using namespace std;

int hour, minute;
int total_minute, newHour, newMinute;

int main()
{
    cin >> hour >> minute;

    total_minute = hour * 60 + minute - 45;
    if (total_minute < 0) { total_minute += (24 * 60); }
    newHour = total_minute / 60;
    newMinute = total_minute % 60;

    cout << newHour << endl << newMinute << endl;
}

