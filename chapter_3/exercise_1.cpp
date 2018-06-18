// 1. Modify enum YourCards in quiz question 4 to demonstrate that the value of
// Queen can be 45
#include<iostream>
using std::cout;
using std::endl;

enum YourCards {
    Ace = 43,
    Jack,
    Queen,
    King
};

int main() {
    cout << "Queen can be " << Queen << endl;

    return 0;
}
