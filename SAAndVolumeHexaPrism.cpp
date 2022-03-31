#include <iostream>
#include <stdlib.h>
#include <cmath>
#include <cstdio>
#include <climits>
#include <iomanip>
//#include <format>

using std::cout;
using std::cin;
using std::string;
using std::endl;
using std::setprecision;
//using std::format;


//Defining Colors
#define RESET   "\033[0m"
#define BOLDGREEN   "\033[1m\033[32m"
#define BOLDRED     "\033[1m\033[31m" 
#define BOLDYELLOW  "\033[1m\033[33m"


string unit;
// float length, height, area, volume;

void introduction () {
    cout << endl <<
	"This program calculates the Volume and " <<
	"Surface Area of a regular hexagonal prism." << endl << endl;
}


void unitSelect() {
    introduction();
    bool unitLoop
    string unitSelect.unit;
    
    while (unitLoop == true){
        cout << "Please enter your unit of measurement below. Only compatible with cm, mm, in, m\n";
        cin >> unitsSelect.unit;
        
        if (unit == "mm" || "cm" || "m" || "in"){
            cout << BOLDGREEN << "Unit selected successfully!" << RESET<< endl;
            unitLoop = false;
        } else {
            cout << BOLDRED << "Invalid Unit." << RESET<<endl;
            
        }
    }
    
}


void calculate() {
    unitSelect();
    
    
    cout << "Enter the base length of the hexagonal prism" << endl;
    cin >> calculate.length;
    
    while(cin.fail()) {
        cin.clear();
        cin.ignore(INT_MAX, '\n');
		cout << BOLDRED << "That Number was invalid\n" << RESET;
		cout <<"Enter the base length of the hexagonal prism\n";
		cin >> calculate.length;
    }
    
    cout << "Enter the height of the hexagonal prism" << endl;
    cin >> calculate.height;
    
    while(cin.fail()) {
        cin.clear();
        cin.ignore(INT_MAX, '\n');
		cout << BOLDRED << "That Number was invalid\n" << RESET;
		cout <<"Enter the base length of the hexagonal prism\n";
		cin >> calculate.height;
    }
    
    calculate.area = (6 * calculate.length * calculate.height) + (3 * sqrt(3)) * pow(calculate.length, 2);
    calculate.volume = (3 * sqrt(3)) / 2 * pow(calculate.length, 2) * calculate.height;
}


void finalStatements(){
    calculate();
    
    cout << BOLDYELLOW << "The Surface area of your hexagonal prism is %.2f" << calculate.area << unitSelect.unit<< " ^2";
    cout << BOLDYELLOW << "The Volume of your hexagonal prism is ";
}

int main() {
	finalStatements();
    
    cout << calculate.length << unitSelect.unit << endl;
    cout << calculate.height;

}