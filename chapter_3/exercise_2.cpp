// 2. Write a program that demonstrates that the size of an unsigned integer and
// a normal integer are the same, and that both are smaller in size than a long
// integer.
#include<iostream>
using std::cout;
using std::endl;

int main() {
    cout << "This program will continue to loop while vars sizeof(uIntSame) and sizeof(iIntSame)" << endl;
    cout << "are less than sizeof(lIntNotSame) (always true) or until stop_val reaches 0" << endl;

    unsigned int uIntSame;
    int iIntSame;
    long lIntNotSame;

    unsigned int stop_val = 3;

    while (sizeof(uIntSame) == sizeof(iIntSame) &&
           sizeof(uIntSame) < sizeof(lIntNotSame) &&
           sizeof(iIntSame) < sizeof(lIntNotSame)) {
        if (stop_val <= 0) {
            break;
        }

        cout  << "sizeof(uIntSame) = " << sizeof(uIntSame) << endl;
        cout  << "sizeof(iIntSame) = " << sizeof(iIntSame) << endl;
        cout  << "sizeof(lIntNotSame) = " << sizeof(lIntNotSame) << endl;

        cout << "while condition is true ending enless loop in... " << stop_val << endl;

        --stop_val;
    }

    return 0;
}
