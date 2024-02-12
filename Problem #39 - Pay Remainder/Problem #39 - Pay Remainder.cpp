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

float CalculateRemminder(float TotalBill, float TotalCashPaid) {
    return TotalCashPaid - TotalBill;
}
int main()
{
    float TotalBill = ReadPositiveNumber("Please Enter Total Bill?");
    float TotalCashPaid = ReadPositiveNumber("Please Enter Total Cash Paid?");

    
    cout << "Remainder = " << CalculateRemminder(TotalBill, TotalCashPaid) << endl;
    return 0;
}