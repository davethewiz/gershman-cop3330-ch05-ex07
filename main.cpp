/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Dave Gershman
 */

#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <math.h>

using namespace std;

bool CheckDeterminant(double a, double b, double c) {
    return (b*b - 4*a*c) >= 0;
}

double FindRoot(double a, double b, double c, bool positive) {
    double rootSign = positive ? 1 : -1;
    
    double result = -b + (rootSign * (sqrt(b*b - 4*a*c)));
    result /= (2*a);
    
    return result;
}

int main()
{
    double a, b, c;
    
    cout << "Enter a, b, and c value of a quadratic equation: ";
    cin >> a >> b >> c;
    
    if (a != 0) { 
        if (CheckDeterminant(a,b,c)) {
            double posRoot = FindRoot(a, b, c, true);
            double negRoot = FindRoot(a, b, c, false);
            
            cout << "The roots are " << posRoot << " and " << negRoot; 
        }
        else {
            cout << "Equation given has no real roots.";
        }
    }
    else {
        cout << "'a' value must not be equal to 0";
    }
    
    return 0;
}

