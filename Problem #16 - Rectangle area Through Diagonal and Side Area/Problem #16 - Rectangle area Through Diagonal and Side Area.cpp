#include <iostream>
#include <cmath>
using namespace std;

void ReadNumbers(float& A, float& D) {
    cout << "Please enter rectangle side\n";
    cin >> A;
    cout << "Please enter rectangle diagonal\n";
    cin >> D;
}

float RectangleAreaBySideAndDiagonal(float A, float D) {
    float Area = A * sqrt(pow(D, 2) - pow(D, 2));
    return Area;
}

void PrintResults(float RectangleArea) {
    cout << "\nThe Rectangle Area is: " << RectangleArea << endl;
}

int main()
{
    float A, D;

    ReadNumbers(A, D);

    PrintResults(RectangleAreaBySideAndDiagonal(A, D));

    return 0;
}