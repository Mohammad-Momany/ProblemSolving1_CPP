#include <iostream>
using namespace std;

int ReadPositiveNumber(string Message)
{
    int Num;
    do
    {
        cout << Message << endl;
        cin >> Num;
    } while (Num < 0);
    
    return Num;
};


int Facrorial(int N) {
    int Sum = 1;

    for (int i = N; i > 0; i--)
    {
        Sum *= i;
    }
    return Sum;
}

void PrintTotal(int Total) {
    cout << "The total number is: " << Total << endl;
}

int main()
{
    PrintTotal(Facrorial(ReadPositiveNumber("Plase enter a positive number?")));

    return 0;
}