#include <iostream>
#include <cmath>
using namespace std;

void ReadCircumference(float& L) {
    cout << "Please enter circle circumference \n";
    cin >> L;
}

float CircleAreaByCircumference(float L) {

    const float PI = 3.14159;

    float Area = pow(L, 2) / (4 * PI);

    return Area;
}

void PrintResults(float Area) {
    cout << "\nThe circle area by circumference is: " << Area << endl;
}

int main()
{
    float L;

    ReadCircumference(L);

    PrintResults(CircleAreaByCircumference(L));
    return 0;
}