#include <iostream>

using namespace std;

void ReadNumbers(int& Num1, int& Num2, int& Num3) {
    cout << "Please enter Number 1\n";
    cin >> Num1;
    cout << "Please enter Number 2\n";
    cin >> Num2;
    cout << "Please enter Number 3\n";
    cin >> Num3;
}

int MaxOf3Numbers(int Num1, int Num2, int Num3) {

    if (Num1 > Num2 && Num1 > Num3)
        return Num1;
    else if (Num2 > Num3)
        return Num2;
    else
        return Num3;
}

void PrintResults(int MaxNum) {
    cout << "\nThe maximum number is: " << MaxNum << endl;
}

int main()
{
    int Num1, Num2, Num3;

    ReadNumbers(Num1, Num2, Num3);
    PrintResults(MaxOf3Numbers(Num1, Num2, Num3));
    return 0;
}