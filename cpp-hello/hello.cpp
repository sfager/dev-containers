#include <iostream>
#include <string>

using namespace std;

int main()
{
    cout << "Hello, World!" << endl;
    cout << "Input: ";
    string input;

    getline(cin, input);
    cout << "You entered: " << input << endl;

    return 0;
}