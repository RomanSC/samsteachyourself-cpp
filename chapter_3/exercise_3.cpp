/* 3. Write a program to calculate the area and circumference of a circle where
      the radius is fed by te user

   Hidden answer from earlier in the book:

       Area = pi * Radius * Radius
       Circumference = 2 * pi * Radius

    4. Q: In Excercise 3, if the area and circumference were to be stored in integers, how would the output be any different?

       A: Well, it would be less accurate. I think depending on compiler the number could become rounded, for instance, if
          float pi = 22 / 7

          I could be wrong that the compiler is what causes this to be interpreted as 'round the number to the nearest int'

          But because I'm a boss I anticipated that and made all my types floats first and didn't have to test with int.

          So I don't really know.

*/
#include<iostream>
#include<limits>
using std::cout;
using std::cin;
using std::endl;
using std::numeric_limits;
using std::streamsize;

int main() {
    float pi = 22.0 / 7;
    float radius;
    float area;
    float circumference;
    bool success = false;

    cout << "This program calculates the area and circumference of a circle. " << endl;

    while (success != true) {
        cout << "Please enter the radius of your circle: ";
        cin >> radius;

        if (cin.fail()) {
            success = false;
            cout << "You did not enter a number. Please only numbers: " << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        } else {
            success = true;
        }
    }

    area = pi * radius * radius;
    circumference = 2 * pi * radius;

    cout << "The area and circumference of your circle with the radius " << radius << " is: " << endl;
    cout << "Area: " << area << endl;
    cout << "Circumference: " << circumference << endl;

    return 0;
}
