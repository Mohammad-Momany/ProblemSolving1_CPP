#include <iostream>
#include <string>

using namespace std;


void ReversedStarts() {
	for (int i = 10; i > 0; i--)
	{
		for (int j = i; j > 0; j--) {
			cout << "*";
		}
		cout << "\n";
	}
};

void ReversedNumbers() {
	for (int i = 10; i >= 1; i--)
	{
		for (int j = 1; j <= i; j++) {
			cout << j << " ";
		}
		cout << "\n";
	}
};

void NestedNumbers() {
	for (int i = 1; i <= 10; i++)
	{
		for (int j = 1; j <= i; j++) {
			cout << j << " ";
		}
		cout << "\n";
	}
};

void AlpaLoopPrint() {
	for (int i = 65; i <= 70; i++)
	{
		for (int j = 65; j <= i; j++) {
			cout << char(j) << " ";
		}
		cout << "\n";
	}
};

void ReversNestedNumbers() {
	for (int i = 1; i <= 10; i++)
	{
		for (int j = i; j <= 10; j++) {
			cout << j << " ";
		}
		cout << "\n";
	}
};
int main()
{
	ReversNestedNumbers();

}


