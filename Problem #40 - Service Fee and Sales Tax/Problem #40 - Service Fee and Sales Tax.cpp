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

float TotalBillAfterServiceAndTax(float TotalBill)
{
    TotalBill = TotalBill * 1.1;
    TotalBill = TotalBill * 1.16;

    return TotalBill;
}
int main()
{
    float TotalBill = ReadPositiveNumber("Please enter Total Bill");


    cout << endl;
    cout << "Total Bill = " << TotalBill << endl;
    cout << "Total Bill After Service Fee and Sales Tax = " 
        << TotalBillAfterServiceAndTax(TotalBill) << endl;

    return 0;
}