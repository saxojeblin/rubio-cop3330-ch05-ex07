/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Nicholas Rubio
 */

#include <iostream>
#include "std_lib_facilities.h"

using namespace std;

int main() 
{
    double a, b, c;
    double root1, root2;
    cout << "This program solves for 'x' of the equation ax^2 + bx + c = 0." << endl;
    cout << "Please enter a, b, and c (i.e. a b c): ";
    cin >> a >> b >> c;

    if ((b * b) - (4 * a * c) < 0)
    {
        cout << "Equation has no real roots (Roots are complex). " << endl;
        return 0;
    }
    //Quadratic Equation
    root1 = (-b + sqrt((b * b) - (4 * a * c))) / (2*a);
    root2 = (-b - sqrt((b * b) - (4 * a * c))) / (2*a);

    //Only one root
    if (root1 == root2) 
    {
        cout << "The root of the equation is " << root1 << "." << endl;
    }
    //Two roots
    else 
    {
        cout << "The roots of the equation are " << root1 << " and " << root2 << "." << endl;
    }

    return 0;
}