/* Quiz
   1. I am writing an application to divide numbers. What's a better suited data type:
   int or float

   float

   2. What is the value of 32 / 7?

      4

   3. What is the value of 32.0 / 7?

      4.57143

   4. Is sizeof() a function?

      No, it's an operator.

   5. I need to compute the double of a number, add 5 to it, then double it again. Is this correct?

   int result = number << 1 + 5 << 1;

   I don't know. Stop trying to be clever and just do

   int number = 2;
   int result = ((number * 2) + 5) * 2;

   6. What is the result of XOR operation where XOR operands both evaluate to true?

   false or 0

*/
#include<iostream>
using std::cout;
using std::endl;

int main() {
    int number = 2;
    int result = ((number * 2) + 5) * 2;
    bool x = true;
    bool y = true;

    cout << 32 / 7 << endl;
    cout << 32.0 / 7 << endl;
    cout << endl;

    cout << number << endl;
    cout << result << endl;
    cout << endl;

    auto resultOfXOR = x ^ y;

    cout << resultOfXOR << endl;

    return 0;
}
