#include <iostream>
#include <cmath>

using namespace std;

void ReadRadious(float& R) {
    cout << "Please enter triangle Radious R\n";
    cin >> R;
}

float CircleArea(float R) {

    const float PI = 3.14159;

    float Area = PI * pow(R, 2);
    return Area;
}

void PrintResults(float CircleArea) {
    cout << "\nThe Circle Area is: " << CircleArea << endl;
}

int main()
{
    float R;

    ReadRadious(R);

    PrintResults(CircleArea(R));
    return 0;
}