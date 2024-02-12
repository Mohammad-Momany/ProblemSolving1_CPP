#include <iostream>

#include <algorithm>

using namespace std;


struct stDriverInfo {
	int Age;
	string HasDrivingLicense,
		HasRecommendation;
};

bool ValidateBooleanInput(string input) {

	transform(input.begin(), input.end(), input.begin(), ::tolower);

	if ( input == "true" || input == "yes" || input == "1") {
		return 1;
	}
	else if ( input == "false" || input == "no" || input == "0") {
		return 0;
	}
	else {
		return NULL;
	}
}

stDriverInfo ReadInfo() {
	stDriverInfo DriverInfo;

	cout << "Please Enter Your Age?" << endl;
	cin >> DriverInfo.Age;

	cout << "Do you have a driver license?" << endl;
	cin >> DriverInfo.HasDrivingLicense;
	

	cout << "Do you have recommendation?" << endl;
	cin >> DriverInfo.HasRecommendation;

	return DriverInfo;
}

bool IsAccpted(stDriverInfo DriverInfo) {

	if (ValidateBooleanInput(DriverInfo.HasRecommendation)) {
		return true;
	}
	else if (DriverInfo.Age >= 18 &&
		ValidateBooleanInput(DriverInfo.HasDrivingLicense)) {
		return true;
	}
	else {
		return false;
	}
}

void PrintResult(stDriverInfo DriverInfo) {
	if (IsAccpted(DriverInfo))
		cout << "\nHired" << endl;
	else
		cout << "\nRejected" << endl;
}
 
int main()
{
	PrintResult(ReadInfo());
	return 0;
}