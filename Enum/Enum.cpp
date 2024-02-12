#include <iostream>
#include <string>
using namespace std;

enum enColor {Red, Green, Yellow, Blue };
enum enGendor {Male, Female};
enum enMaritalStatus{ Single, Married };

struct stAddress {
    string StreetName;
    string BuildingNo;
    string POBox;
    string ZipCode;
};

struct stContactInfo {
    string Phone;
    string Email;
    stAddress Address;
};


struct stPerson
{
    string FirstName;
    string LastName;

    stContactInfo ConstectInfo;
    enMaritalStatus MaritalStatus;
    enGendor Gendor;
    enColor FavourateColor;
};

int main()
{
    stPerson Person1;

    Person1.FirstName = "Mohammad";
    Person1.LastName = "Almomany";
    
    Person1.ConstectInfo.Email = "Mohammad.w.momani@gmail.com";
    Person1.ConstectInfo.Phone = "0777887799";

    Person1.ConstectInfo.Address.POBox = "7777";
    Person1.ConstectInfo.Address.ZipCode = "1122";
    Person1.ConstectInfo.Address.StreetName = "The Queen Street";
    Person1.ConstectInfo.Address.BuildingNo= "18";

    Person1.Gendor = enGendor::Male;
    Person1.FavourateColor = enColor::Green;

}
