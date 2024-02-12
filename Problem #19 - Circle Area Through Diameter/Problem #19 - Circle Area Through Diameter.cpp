#include <iostream>
#include <cmath>

using namespace std;

void ReadDiameter(float& D) {
    cout << "Please enter readious D\n";
    cin >> D;
}

float CircleAreaByDiameter(float D) {

    const float PI = 3.14159;

    float Area = (PI * pow(D, 2)) / 4;

    return Area;
}

void PrintResults(float CircleArea) {
    cout << "\nThe circle area through diameter is: " << CircleArea << endl;
}

int main()
{
    float D;

    ReadDiameter(D);

    PrintResults(CircleAreaByDiameter(D));
    return 0;
}