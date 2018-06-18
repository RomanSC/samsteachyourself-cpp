/*
 * =====================================================================================
 *
 *       Filename:  listing_2_4.cpp
 *
 *    Description:  Listing 2.4 from SamsTeachYourself C++
 *
 *        Version:  1.0
 *        Created:  06/11/2018 09:25:36 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Roman Collins (r.s.col988@gmail.com),
 *   Organization:
 *
 * =====================================================================================
 */
#include<iostream>
using namespace std;

int DemoConsoleOutput() {
    cout << "This is a simple string literal" << endl;
    cout << "Writing number five: " << 5 << endl;
    cout << "Performing division 10 / 5 = " << 10 / 5 << endl;
    cout << "Pi when approximated is 22 / 7 = " << 22 / 7 << endl;
    cout << "Pi is 22 / 7 = " << 22.0 / 7 << endl;
    return 0;
}

int main() {
    DemoConsoleOutput();
    return 0;
}
