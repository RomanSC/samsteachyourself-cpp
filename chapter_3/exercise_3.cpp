/* 3. Write a program to calculate the area and circumference of a circle where
      the radius is fed by te user

   Hidden answer from earlier in the book:

       Area = pi * Radius * Radius
       Circumference = 2 * pi * Radius

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
