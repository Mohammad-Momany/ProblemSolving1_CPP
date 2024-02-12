#include <iostream>

using namespace std;

void ReadNumbers(float& A, float& B) {
    cout << "Please enter rectangle width\n";
    cin >> A;
    cout << "Please enter rectangle length\n";
    cin >> B;
}

float RectangleArea(float A, float B) {
    float Area = A * B;
    return Area;
}

void PrintResults(float RectangleArea) {
    cout << "\nThe Rectangle Area is: " << RectangleArea << endl;
}

int main()
{
    float A, B;
        

    ReadNumbers(A, B);

    PrintResults(RectangleArea(A, B));

    return 0;
}