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
};

float TotalMonths(float LoanAmount, float MonthlyInstallment) {
    return (float) LoanAmount / MonthlyInstallment;
}
int main()
{
    float LoanAmount = ReadPositiveNumber("Enter the Loan Amount");
    float MonthlyInstallment = ReadPositiveNumber("Enter the Monthly Installment");


    cout <<  "\nTotal Months to pay = " << TotalMonths(LoanAmount, MonthlyInstallment) << endl;
    return 0;
}