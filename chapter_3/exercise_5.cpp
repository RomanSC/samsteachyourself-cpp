/* 5. Q: BUGBUSTERS: What is wrong in the following initialization:

         auto Integer;

    A: First, you should not use variable names like "Int" or "Integer"

       But the actual bug is that the compiler has no idea what the type
       should be without an initializer, answer demonstrated below:

*/
#include<iostream>
using std::cout;
using std::endl;

int main() {
    auto aNotBuggyAutoInt = 4;
    cout << aNotBuggyAutoInt << endl;

    return 0;
}
