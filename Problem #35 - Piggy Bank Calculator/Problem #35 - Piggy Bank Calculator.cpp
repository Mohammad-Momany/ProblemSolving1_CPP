#include <iostream>

using namespace std;

struct stPiggyBankContent {
    int Pennies, Nickels, Dimes, Quarters, Dollars;
 };

stPiggyBankContent ReadPiggyBankContent()
{
    stPiggyBankContent PiggyBankContent;

    cout << "Enter the Pennies Number \n";
    cin >> PiggyBankContent.Pennies;
    cout << "Enter the Nickels Number \n";
    cin >> PiggyBankContent.Nickels;
    cout << "Enter the Dimes Number \n";
    cin >> PiggyBankContent.Dimes;
    cout << "Enter the Quarters Number \n";
    cin >> PiggyBankContent.Quarters;
    cout << "Enter the Dollars Number \n";
    cin >> PiggyBankContent.Dollars;

    return PiggyBankContent;
}

int CalculateTotalPennies(stPiggyBankContent PiggyBankContent) {
    int TotalPennies =  
        PiggyBankContent.Pennies + 
        PiggyBankContent.Nickels * 5 + 
        PiggyBankContent.Dimes * 10 + 
        PiggyBankContent.Quarters * 25 + 
        PiggyBankContent.Dollars * 100;
    
    return TotalPennies;
}
int main()
{

    int TotalPennies = CalculateTotalPennies(ReadPiggyBankContent());
    float TotalDollars = (float) TotalPennies / 100;

    cout << "TotalPennies: " << TotalPennies << endl;
    cout << "TotalDollars: " << TotalDollars << endl;
    return 0;
}