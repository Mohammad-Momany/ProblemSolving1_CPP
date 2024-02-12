#include <iostream>

using namespace std;

float ReadPositiveNumber(string Message)
{
    int Num;

    do {
        cout << Message << endl;
        cin >> Num;
    } while (Num < 0);

    return Num;
}

float HoursToDays(float NumberOfHours) {
    return float(NumberOfHours / 24);
};
float HoursToWeeks(float NumberOfHours) {
    return float(NumberOfHours / 7 / 24);
};
float DaysToWeeks(float NumberOfHours) {
    return float(NumberOfHours / 7);
};
int main()
{
    float NumberOfHours = ReadPositiveNumber("Please Enter the Number Of Hours");
    float NumberOfDays = HoursToDays(NumberOfHours);
    float NumberToWeeks = DaysToWeeks(NumberOfDays);

    cout << endl;
    cout << "Total Hours = " << NumberOfHours << endl;
    cout << "Total Days = " << NumberOfDays << endl;
    cout << "Total Weeks = " << HoursToWeeks(NumberOfHours) << endl;

    return 0;
}

