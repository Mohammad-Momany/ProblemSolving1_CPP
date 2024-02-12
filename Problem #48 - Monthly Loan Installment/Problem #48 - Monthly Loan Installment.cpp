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

float MonthlyInstallment(float LoanAmount, float HowManyMonths) {
    return (float)LoanAmount / HowManyMonths;
}
int main()
{
    float LoanAmount = ReadPositiveNumber("Enter the Loan Amount");
    float HowManyMonths = ReadPositiveNumber("How many months?");


    cout << "\nMonthly Installment = " << MonthlyInstallment(LoanAmount, HowManyMonths) << endl;
    return 0;
}