#include<iostream>
using namespace std;

void MultiplyNumbers() {
    int firstNumber;
    int secondNumber;

    cout << "Enter the first number: ";
    cin >> firstNumber;

    cout << "Enter the second number: ";
    cin >> secondNumber;

    int multiplicationResult = firstNumber * secondNumber;

    cout << firstNumber << " x " << secondNumber;
    cout << " = " << multiplicationResult << endl;
}

int main() {
    cout << "This program will help you multiply two numbers" << endl;
    MultiplyNumbers();

    return 0;
}
