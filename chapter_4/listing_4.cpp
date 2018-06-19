#include<iostream>
#include<vector>
using std::cout;
using std::cin;
using std::endl;
using std::vector;

int main() {
    vector<int> dynArray(3);
    dynArray[0] = 365;
    dynArray[1] = -421;
    dynArray[2] = 789;

    cout << "Number of integers in array: " << dynArray.size() << endl;
    cout << "enter another element to insert: ";
    int newValue = 0;
    cin >> newValue;

    dynArray.push_back(newValue);

    cout << dynArray[dynArray.size() - 1] << endl;

    return 0;
}
