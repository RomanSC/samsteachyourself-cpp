// DANGER: Just don't do this
#include<iostream>
#include<string>
#include<cstring>
using std::cout;
using std::cin;
using std::endl;
using std::strlen;

int main() {
    cout << "Enter a word NOT longer than 20 characters, or get totally pwned: " << endl;
    char userInput[21] = {'\0'};
    cin >> userInput;

    cout << "Length of your input was: " << strlen(userInput);

    // Output:
    // 19$
    // CRINGE

    return 0;
}
