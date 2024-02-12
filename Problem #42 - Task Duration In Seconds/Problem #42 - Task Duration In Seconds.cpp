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


int TaskDurationInSeconds(stTaskDuration TaskDuration) {
    
    int DurationInSeconds = 0;

    DurationInSeconds = TaskDuration.Days * 24 * 60 * 60;
    DurationInSeconds += TaskDuration.Hours * 60 * 60;
    DurationInSeconds += TaskDuration.Minutes * 60;
    DurationInSeconds += TaskDuration.Seconds;

    return DurationInSeconds;
}


int main()
{
  
    cout << "\Task Duration In Seconds: " << TaskDurationInSeconds(ReadTaskDuration()) << endl;
    return 0;
}