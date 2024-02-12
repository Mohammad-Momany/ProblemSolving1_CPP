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

int SumOf3Numbers(int Num1, int Num2, int Num3) {
    return Num1 + Num2 + Num3;
}

void PrintResults(int Total) {
    cout << "\nThe total sum of the numbers is: " << Total << endl;
}

int main()
{
    int Num1, Num2, Num3;

    ReadNumbers(Num1, Num2, Num3);
    PrintResults(SumOf3Numbers(Num1, Num2, Num3));
    return 0;
}