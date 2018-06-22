#include<iostream>
using std::cout;
using std::cin;
using std::endl;

int main() {
    cout << "Enter 1 for true or 0 for false for two operands: " << endl;
    bool op1 = false, op2 = false;
    cin >> op1;
    cin >> op2;

    cout << op1 << " AND " << op2 << " = " << (op1 && op2) << endl;
    cout << op1 << " OR " << op2 << " = " << (op1 || op2) << endl;

    return 0;
}
