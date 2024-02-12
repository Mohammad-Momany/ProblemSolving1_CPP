#include <iostream>
#include <cmath>

using namespace std;

void ReadTriangleData(float& A, float& B, float& C) {

    cout << "Please enter triangle side A\n";
    cin >> A;

    cout << "Please enter triangle base B\n";
    cin >> B;

    cout << "Please enter triangle side C\n";
    cin >> C;

}

float CircleAreaByATriangle(float A, float B, float C) {

    const float PI = 3.14159;

    float P;
    P = (A + B + C) / 2;

    float T;
    T = (A * B * C) / (4 * sqrt(P * (P - A) * (P - B) * (P - C)));

    float Area = PI * pow(T, 2);

    return Area;
}

void PrintResult(float Area) {
    cout << "\nThe Circle Area is: " << Area << endl;
}

int main()
{
    float A, B, C;

    ReadTriangleData(A, B, C);
    PrintResult(CircleAreaByATriangle(A, B, C));

    return 0;
}


int main()
{
    const float PI = 3.14;

    unsigned short area;
    float a, b, c, p, t;

    cout << "Enter a Number 1\n";
    cin >> a;
    cout << "Enter a Number 2\n";
    cin >> b;
    cout << "Enter a Number 3\n";
    cin >> c;

    p = (a + b + c) / 2;
    t = (a * b * c) / (4 * sqrt(p * (p - a) * (p - b) * (p - c)));
    t = pow(t, 2);
    area = round(PI * t);

    cout << "The area is " << area;
    return 0;
}