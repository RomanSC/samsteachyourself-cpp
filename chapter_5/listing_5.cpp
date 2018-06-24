#include<iostream>
using std::cout;
using std::cin;
using std::endl;

int main() {
    cout << "Use 1 for true or 0 for false to answer the questions: " << endl;
    cout << "Is it raining? ";
    bool isRaining = false;
    cin >> isRaining;

    cout << "Do you have buses on the streets? ";
    bool busesPly;
    cin >> busesPly;

    if (isRaining && !busesPly)
        cout << "You cannot go to work" << endl;
    else
        cout << "You can go to work" << endl;

    if ((!isRaining) && busesPly)
        cout << "Enjoy the sun and have a nice day" << endl;

    return 0;
}
