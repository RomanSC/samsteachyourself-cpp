/* Quiz:
   1. Check the array myNumbersin Listing 4.1. What are the indexes of the first and last elements in that array?

      0 and 4

   2. If you need to allow the user to input strings, would you use C-style strings?

      I would not use C-style strings unless I have to.

   3. How many characters are in '\0' as seen by the compiler?

      1

      0 is the ASCII code, \ is an escape char

   4. You forget to end your C-style string with a null-terminator. What happens when you use it?

      Chickens rain from the sky and pwn your system.

   5. See the declaration of vector in Listing 4.4 and try composing a dynamic array that contains elements of the type char.

      Okay. You asked for it.

      ... Seems to work fine.

*/
#include<iostream>
#include<vector>
using std::cout;
using std::endl;
using std::vector;

int main() {
    vector<char> myChars;
    char a;

    for (int i = 40; i < 128; i++) {
        a = i;
        myChars.push_back(a);
    }
    myChars.push_back('\0');


    for (long unsigned int i = 0; i < myChars.size() - 1; i++) {
        cout << myChars[i];
    }

    return 0;
}
