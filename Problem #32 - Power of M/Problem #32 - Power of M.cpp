#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    unsigned short Number1, M, Resulte;

    cout << "Enter a Number\n";
    cin >> Number1;
    cout << "Enter a M Number \n";
    cin >> M;

    Resulte = round(pow(Number1, M));

    cout << "The power number = " << Resulte << endl ;
    return 0;
}