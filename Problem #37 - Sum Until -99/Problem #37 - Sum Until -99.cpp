#include <iostream>
#include <string>
using namespace std;

int ReadNumber(string Message)
{
    int Number;
    cout << Message << endl;
    cin >> Number;

    return Number;
};



float SumNumbers() {

    int Sum = 0, Number = 0, Counter = 1;

    do
    {
        Number = ReadNumber("Please enter the number " + to_string(Counter));
        if (Number == -99) {
            break;
        }
        Sum += Number;
        Counter++;
    }while(Number != -99);

    return Sum;
}

void PrintTotal(int Total) {
    cout << "The total number is: " << Total << endl;
}

int main()
{
    PrintTotal(SumNumbers());

    return 0;
}
