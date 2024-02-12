#include <iostream>

using namespace std;

void ReadNumbers(int& Num1, int& Num2) {
    cout << "Please enter Number 1\n";
    cin >> Num1;
    cout << "Please enter Number 2\n";
    cin >> Num2;
}

void swapTwoNumbers(int &Number1, int &Number2) {
    int Temp;
    Temp = Number1;
    Number1 = Number2;
    Number2 = Temp;
}

void PrintResults(int Num1, int Num2) {
    cout << "\nNumber 1 = " << Num1 << " Number 2 = " << Num2 << endl;
}
int main()
{
    int Number1, Number2;

    ReadNumbers(Number1, Number2);

    PrintResults(Number1, Number2);
    swapTwoNumbers(Number1, Number2);

    PrintResults(Number1, Number2);

    return 0;
}

