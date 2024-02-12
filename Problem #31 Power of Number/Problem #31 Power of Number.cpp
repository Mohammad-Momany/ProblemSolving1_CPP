#include <iostream>

using namespace std;

void ReadNumber(int &Num, int &Power)
{

    cout << "Please enter the number " << endl;
    cin >> Num;    
    cout << "Please enter the power " << endl;
    cin >> Power;

};

int PowerNumbers(int Num, int Power) {
    int Result = 1;
    
    if (Power == 0) {
        return 1;
    }

    for (int i = 0; i < Power; i++)
    {
        Result *= Num;
    }

    return Result;
}

void PrintResult(int Reslut) {
    cout << "Reslut = " << Reslut << endl;
}
int main()
{
    int Number, Power;

    ReadNumber(Number, Power);

    PrintResult(PowerNumbers(Number, Power));

    
    return 0;
}