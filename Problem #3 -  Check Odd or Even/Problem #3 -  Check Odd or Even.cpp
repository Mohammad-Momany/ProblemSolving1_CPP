#include <iostream>

using namespace std;


enum enNumberType { Odd = 1, Even = 0 };

int ReadNumber()
{
    int Num;

    do {
        cout << "Please enter a positive number? " << endl;
        cin >> Num;
    } while (Num < 0);

    return Num;
}


enNumberType CheckNumberType(int Num)
{
    int Result = Num % 2;
    if (Result == 0) {
        return enNumberType::Even;
    }
    else {
        return enNumberType::Odd;
    }
}

void PrintNumberType(enNumberType NumberType)
{
    if (NumberType == enNumberType::Even) {
        cout << "\nNumber is Even. \n";
    }
    else {
        cout << "\nNumber is Odd. \n";
    }
}

int main()
{

    PrintNumberType(CheckNumberType(ReadNumber()));
    return 0;
}
