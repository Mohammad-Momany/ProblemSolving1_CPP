#include <iostream>
using namespace std;

int ReadNumber()
{
    int Age;
    cout << "Please enter the number " << endl;
    cin >> Age;

    return Age;
};

void PrintRangeFrom1ToN_ForLoop(int N) {

    cout << "\nFor Loop\n" << endl; 
 
    for (int i = 1; i <= N; i++)
    {
        cout << "Index: " << i << endl;
    }
        
 
}
void PrintRangeFrom1ToN_ForLoopReversed(int N) {

    cout << "\nReversed For Loop\n" << endl;

    for (int i = N; i > 0; i--)
    {
        cout << "Index: " << i << endl;
    }
}

void PrintRangeFrom1ToN_WhileLoop(int N) {

    cout << "\nWhile Loop\n" << endl;

    int counter = 1;

        while (counter <= N)
        {
            cout << "Index: " << counter << endl;
            counter++;
        }
 }
void PrintRangeFrom1ToN_WhileLoopReversed(int N) {
    cout << "\nReversed While Loop\n" << endl;

    int counter = N;

    while (counter > 0)
    {
        cout << "Index: " << counter << endl;
        counter--;
    }

}
    
void PrintRangeFrom1ToN_DoWhileLoop(int N) {
    int counter = 1;

    cout << "\nDo While Loop\n" << endl;
    do {
        cout << "Index: " << counter << endl;
        counter++;
    } while (counter <= N);
};
void PrintRangeFrom1ToN_DoWhileLoopReversed(int N) {

    int counter = N;

    cout << "\nReversed Do While Loop\n" << endl;
    do {
        cout << "Index: " << counter << endl;
        counter--;
    } while (counter > N);
};


int main()
{
    int N = ReadNumber();

    PrintRangeFrom1ToN_ForLoop(N);
    PrintRangeFrom1ToN_ForLoopReversed(N);
    PrintRangeFrom1ToN_WhileLoop(N);
    PrintRangeFrom1ToN_WhileLoopReversed(N);
    PrintRangeFrom1ToN_DoWhileLoop(N);
    PrintRangeFrom1ToN_DoWhileLoopReversed(N);
    return 0;
}