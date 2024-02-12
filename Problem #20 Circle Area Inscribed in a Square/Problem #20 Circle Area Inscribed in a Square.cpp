#include <iostream>
#include <cmath>
using namespace std;

void ReadSquareSide(float& A) {
    cout << "Please enter square side A\n";
    cin >> A;
}

float CircleAreaInscribedInSquare(float A) {

    const float PI = 3.14159;

    float Area = (PI * pow(A, 2)) / 4;;

    return Area;
}

void PrintResults(float Area) {
    cout << "\nThe circle area inscribed in square is: " << Area << endl;
}

int main()
{
    float A;

    ReadSquareSide(A);

    PrintResults(CircleAreaInscribedInSquare(A));
    return 0;
}