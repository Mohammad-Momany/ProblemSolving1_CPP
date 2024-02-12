#include <iostream>

using namespace std;

void ReadNumbers(float& A, float& H) {
    cout << "Please enter triangle base A\n";
    cin >> A;
    cout << "Please enter triangle height\n";
    cin >> H;
}

float TriangleArea(float A, float H) {
    float Area = A / 2 * H;
    return Area;
}

void PrintResults(float TriangleArea) {
    cout << "\nThe Triangle Area is: " << TriangleArea << endl;
}
int main()
{
    float A, H;

    ReadNumbers(A, H);

    PrintResults(TriangleArea(A, H));

    return 0;
}