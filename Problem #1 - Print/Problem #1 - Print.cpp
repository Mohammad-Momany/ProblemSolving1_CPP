#include <iostream>
#include <string>
using namespace std;

string ReadName() {
    string Name;
    cout << "Enter your name\n";
    getline(cin, Name);
    return Name;
}


void PrintName(string Name) {
    cout << "Hello " +Name;
}

int main()
{  
    PrintName(ReadName());
    return 0;
    
}
