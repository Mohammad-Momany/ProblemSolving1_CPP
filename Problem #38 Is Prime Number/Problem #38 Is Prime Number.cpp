#include <iostream>


using namespace std;


enum enPrimeNotPrime { Prime = 1, NotPrime = 2 };

float ReadPositiveNumber(string Message)
{
    int Num;

    do {
        cout << Message << endl;
        cin >> Num;
    } while (Num < 0);

    return Num;
}

int CheckPrime(int Num)
{
    int M = round(Num / 2);
    for (int i = 2; i <= M; i++)
    {
        if (Num % i == 0)
            return enPrimeNotPrime::NotPrime;
           
    }

    return enPrimeNotPrime::Prime;
}

void PrintNumberType(int Num)
{
    if (CheckPrime(Num) == enPrimeNotPrime::Prime)
        cout << "The number is Prime\n";
    
    else 
        cout << "The number is not Prime\n";
}



int main()
{

    PrintNumberType(ReadPositiveNumber("Please enter a positive number? "));
    return 0;
}
 