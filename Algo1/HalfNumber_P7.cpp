#include <iostream>
#include <string>

using namespace std;

int ReadNumber() {
	int Num;

	cout << "Please Enter a Number?" << endl;
    cin >> Num;

	return Num;
}

float CalculateHalfNumber(int Num) {
    return (float) Num / 2;
}

void PrintResult(int Num) {
    string Result = "Half of " + to_string(Num) + " is " + to_string(CalculateHalfNumber(Num));
    cout << endl << Result << endl;
}
int main()
{
    PrintResult(ReadNumber());
    return 0;
}