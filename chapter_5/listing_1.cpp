#include<iostream>
using std::cout;
using std::cin;
using std::endl;

int main() {
    int num1 = 0, num2 = 0;

    cout << "Enter two integers: " << endl;
    cin >> num1;
    cin >> num2;

    cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
    cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
    cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
    cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
    cout << num1 << " % " << num2 << " = " << num1 % num2 << endl;

    return 0;
}
