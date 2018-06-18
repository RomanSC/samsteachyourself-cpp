/*
 * =====================================================================================
 *
 *       Filename:  listing_2_3.cpp
 *
 *    Description:  More precise usage of "using" 
 *
 *        Version:  1.0
 *        Created:  06/08/2018 12:43:58 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Roman Collins (r.s.col988@gmail.com), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include<iostream>

int main() {
    using std::cout;
    using std::endl;

    cout << "Hello world!" << endl;

    return 0;
}
