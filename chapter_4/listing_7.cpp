#include<iostream>
#include<string>
using std::cout;
using std::cin;
using std::endl;
using std::string;

int main() {
    /* string greetString("Hello std::string!"); */
    string greetString = "Hello std::string!";
    cout << greetString << endl;

    cout << "Enter a line of text: " << endl;
    string firstline;
    getline(cin, firstline);

    cout << "Enter another: " << endl;
    string secondLine;
    getline(cin, secondLine);

    cout << "Result of concatenation: " << endl;
    string concatString = firstline + " " + secondLine;
    cout << concatString << endl;

    cout << "Copy of concatenated string: " << endl;
    string aCopy = concatString;
    cout << aCopy << endl;

    cout << "Length of concat string: " << concatString.length() << endl;

    return 0;
}
