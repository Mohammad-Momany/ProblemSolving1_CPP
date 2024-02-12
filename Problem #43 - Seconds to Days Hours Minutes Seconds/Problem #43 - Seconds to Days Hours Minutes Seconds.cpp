#include <iostream>

using namespace std;


struct stTaskDuration {
    int Days, Hours, Minutes, Seconds;
};

int ReadPositiveNumber(string Message)
{
    int Num;

    do {
        cout << Message << endl;
        cin >> Num;
    } while (Num < 0);

    return Num;
}

stTaskDuration ReadTaskDuration()
{
    stTaskDuration TaskDuration;

    TaskDuration.Days = ReadPositiveNumber("Enter the Number Of Days");
    TaskDuration.Hours = ReadPositiveNumber("Enter the Number Of Hours");
    TaskDuration.Minutes = ReadPositiveNumber("Enter the Number Of Minutes");
    TaskDuration.Seconds = ReadPositiveNumber("Enter the Number Of Seconds");


    return TaskDuration;
}


stTaskDuration SecondsToTaskDuration(int TotalSeconds) {

    stTaskDuration TaskDuration;


    const int SecondsPerDays = 24 * 60 * 60;
    const int SecondsPerHours = 60 * 60;
    const int SecondsPerMinutes = 60;

    int Remainder = 0;
    TaskDuration.Days = floor(TotalSeconds / SecondsPerDays);
    Remainder = TotalSeconds % SecondsPerDays;

    TaskDuration.Hours = floor(Remainder / SecondsPerHours);
    Remainder = TotalSeconds % SecondsPerHours;    

    TaskDuration.Minutes  = floor(Remainder / SecondsPerMinutes);
    Remainder = TotalSeconds % SecondsPerMinutes;

    TaskDuration.Seconds = Remainder;

        return TaskDuration;
}

void PrintTaskDurationDetails(stTaskDuration TaskDuration) {
    cout << "\n";
    cout << TaskDuration.Days << ":"
        << TaskDuration.Hours << ":"
        << TaskDuration.Minutes << ":"
        << TaskDuration.Seconds << "\n";
}

int main()
{
    int TotalSeconds = ReadPositiveNumber("Please Enter Total Seconds?");

    PrintTaskDurationDetails(SecondsToTaskDuration(TotalSeconds));
    return 0;
}