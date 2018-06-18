#include<iostream>
using namespace std;

int main() {
    auto coinFlippedHeads = true;
    auto largeNumber = 2'500'000'000'000;

    cout << "coinFlippedHeads = " << coinFlippedHeads;
    cout << " , sizeof(coinFlippedHeads) = " << sizeof(coinFlippedHeads) << endl;

    cout << "largeNumber = " << largeNumber;
    cout << " , sizeof(largeNumber) = " << sizeof(largeNumber) << endl;

    return 0;
}
