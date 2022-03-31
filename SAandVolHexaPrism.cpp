// Copyright (c) 2022 Alex De Meo All rights reserved
//
// Created By: Alex De Meo
// Date: 02//22
// Description: Calculates the surface area and volume of a hexagonal
// prism with user input
#include <stdlib.h>
#include <cmath>
#include <cstdio>
#include <climits>
#include <iomanip>
#include <iostream>
// #include <format>

using std::cout;
using std::cin;
using std::string;
using std::endl;
using std::setprecision;
// using std::format;


// Defining Colors
#define RESET   "\033[0m"
#define BOLDGREEN   "\033[1m\033[32m"
#define BOLDRED     "\033[1m\033[31m"
#define BOLDYELLOW  "\033[1m\033[33m"

int main() {
    // declaring variables
    string unit;
    float length, height, volume, area;

    cout << endl <<
    "This program calculates the Volume and " <<
    "Surface Area of a regular hexagonal prism." << endl << endl;

    // GET Unit from user
    cout <<
    "Please enter your unit of measurement below. " <<
    "Only compatible with cm, mm, in, m" << endl;
    cin >> unit;

    cout << BOLDGREEN << "Unit selected successfully" << RESET <<endl;

    //  GET base length
    cout << "Enter the base length of the hexagonal prism" << endl;
    cin >> length;

    // If they don't enter a number/error checking
    while (cin.fail()) {
        cin.clear();
        cin.ignore(INT_MAX, '\n');
        cout << BOLDRED << "That Number was invalid\n" << RESET;
        cout <<"Enter the base length of the hexagonal prism\n";
        cin >> length;
    }
    // get length
    cout << "Enter the height of the hexagonal prism" << endl;
    cin >> height;
    // If they don't enter a number/error checking
    while (cin.fail()) {
        cin.clear();
        cin.ignore(INT_MAX, '\n');
        cout << BOLDRED << "That Number was invalid\n" << RESET;
        cout <<"Enter the base length of the hexagonal prism\n";
        cin >> height;
    }

    // calculations
    area = (6 * length * height) + ((3 * sqrt(3)) * pow(length, 2));
    volume = (3 * sqrt(3)) / 2 * pow(length, 2) * height;

    // final statements
    printf("%sThe Surface area of your hexagonal prism is %.2f ",
    BOLDYELLOW, area);
    cout << unit << "^3\n";
    printf("%sThe Volume of your hexagonal prism is %.2f ", BOLDYELLOW, volume);
    cout << unit << "^2";
}
