/*
 * =====================================================================================
 *
 *       Filename:  chapter_1_excercise_1.cpp
 *
 *    Description: Chapter 1 Excercise 1 
 *                 
 *                 1. Look at the following program and try to guess what it
 *                 does without running it:
 *
 *                 The program will print a new line, then the number 2,
 *                 a space, then the number 48, a space, then 14, finally
 *                 another newline:
 *                 
 *                 2 48 14
 *
 *        Version:  1.0
 *        Created:  06/08/2018 12:14:31 AM
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
    int x = 8;
    int y = 6;
    std::cout << std::endl;
    std::cout << x - y << " " << x * y << " " << x + y;
    std::cout << std::endl;
}
