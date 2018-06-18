#include<iostream>
#include<string>
using namespace std;

int main() {
    int inputNumber;
    string inputName;

    cout << "Enter an integer: ";
    cin >> inputNumber;


    cout << "Enter your name: ";
    cin >> inputName;

    cout << inputName << " entered " << inputNumber << endl;

    return 0;
}
