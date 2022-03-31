#include <iostream>
#include <stdlib.h>
#include <cmath>
#include <climits>
//#include <format>

using std::cout;
using std::cin;
using std::string;
using std::endl;
//using std::format;


//Defining Colors
#define RESET   "\033[0m"
#define BOLDGREEN   "\033[1m\033[32m"
#define BOLDRED     "\033[1m\033[31m" 
#define BOLDYELLOW  "\033[1m\033[33m"


string unit;
float length, height, area, volume;
bool unitLoop = true, loop2 = true, loop3 = true, loop4 =true;

void introduction () {
    cout << endl <<
	"This program calculates the Volume and " <<
	"Surface Area of a regular hexagonal prism." << endl << endl;
}


void unitSelect() {
    introduction();
    
    while (::unitLoop == true){
        cout << "Please enter your unit of measurement below. Only compatible with cm, mm, in, m\n";
        cin >> ::unit;
        
        if (::unit != "mm" || "cm" || "m" || "in"){
            cout << BOLDGREEN << "Unit selected successfully!" << RESET<< endl;
            ::unitLoop = false;
        } else {
            cout << BOLDRED << "Invalid Unit." << RESET<<endl;
            
        }
    }
    
}


void calculate() {
    unitSelect();
    
    cout << "Enter the base length of the hexagonal prism" << endl;
    cin >> ::length;
    
    while(cin.fail()) {
        cin.clear();
        cin.ignore(INT_MAX, '\n');
		cout << BOLDRED << "That Number was invalid\n" << RESET;
		cout <<"Enter the base length of the hexagonal prism\n";
		cin >> ::length;
    }
    
    cout << "Enter the height of the hexagonal prism" << endl;
    cin >> ::height;
    
    while(cin.fail()) {
        cin.clear();
        cin.ignore(INT_MAX, '\n');
		cout << BOLDRED << "That Number was invalid\n" << RESET;
		cout <<"Enter the base length of the hexagonal prism\n";
		cin >> ::height;
    }
    
    ::area = (6 * ::length * ::height) + (3 * sqrt(3)) * pow(::length, 2);
    ::volume = (3 * sqrt(3)) / 2 * pow(::length, 2) * ::height;
}


void finalStatements(){
    calculate();
    
    cout << "The Surface area of your hexagonal prism is {:.2f} {}^2", ::area, ::unit;
}

int main() {
	finalStatements();
    
    cout << ::length << ::unit << endl;
    cout << ::height;

}