#include<iostream>
using namespace std;

int main() {
    int firstNumber;
    int secondNumber;

    cout << "This program will help you multiply two numbers" << endl;
    cout << "Enter your first number: ";
    cin >> firstNumber;
    cout << "Enter the second number: ";
    cin >> secondNumber;


    int multiplicationResult = firstNumber * secondNumber;

    cout << firstNumber << " x " << secondNumber;
    cout << " = " << multiplicationResult << endl;

    return 0;
}
