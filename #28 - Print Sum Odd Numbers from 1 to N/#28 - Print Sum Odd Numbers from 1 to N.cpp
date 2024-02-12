#include <iostream>
using namespace std;


enum enOddOrEven { Odd = 1, Even = 0 };

int ReadNumber()
{
    int Number;
    cout << "Please enter the number " << endl;
    cin >> Number;

    return Number;
};

enOddOrEven CheckOddOrEven(int Num) {

    if (Num % 2 == 0)
        return enOddOrEven::Even;
    else
        return enOddOrEven::Odd;
}

int SumOddNumbersFrom1ToN_ForLoop(int N) {
    int Sum = 0;

    cout << "\nSum Odd number using For Loop\n" << endl;

    for (int i = 1; i <= N; i++)
    {
        if(CheckOddOrEven(i) == enOddOrEven::Odd)
        {
            Sum += i;
        }
            
    }

    return Sum;


}

int SumEvenNumbersFrom1ToN_ForLoop(int N) {
    int Sum = 0;

    cout << "\nSum Even number using For Loop\n" << endl;

    for (int i = 1; i <= N; i++)
    {
        if (CheckOddOrEven(i) == enOddOrEven::Even)
        {
            Sum += i;
        }

    }

    return Sum;
}

void PrintTotal(int Total) {
    cout << "The total number is: " << Total << endl;
}

int main()
{
    PrintTotal(SumEvenNumbersFrom1ToN_ForLoop(ReadNumber()));
    return 0;
}
