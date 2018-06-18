#include<iostream>
using namespace std;

int firstNumber;
int secondNumber;
int multiplicationResult;

void MultiplyNumbers() {
    cout << "Enter the first number: ";
    cin >> firstNumber;

    cout << "Enter the second number: ";
    cin >> secondNumber;

    multiplicationResult = firstNumber * secondNumber;

    cout << "Displaying from MultiplyNumbers(): ";
    cout << firstNumber << " x " << secondNumber;
    cout << " = " << multiplicationResult << endl;
}

int main() {
    cout << "This program will help you multiply two numbers" << endl;

    MultiplyNumbers();

    cout << "Displaying from main(): ";

    cout << firstNumber << " x " << secondNumber;
    cout << " = " << multiplicationResult << endl;

    return 0;
}
