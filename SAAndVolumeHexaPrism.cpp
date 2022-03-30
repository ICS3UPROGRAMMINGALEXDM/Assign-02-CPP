#include <iostream>
#include <stdlib.h>

using std::cout;
using std::cin;
using std::string;
using std::endl;

//Defining Colors
#define RESET   "\033[0m"
#define BOLDGREEN   "\033[1m\033[32m"
#define BOLDRED     "\033[1m\033[31m" 
#define BOLDYELLOW  "\033[1m\033[33m"


string unit;
float length, height;
bool loop1 = true, loop2 = true, loop3 = true, loop4 =true;

void introduction () {
    cout << endl <<
	"This program calculates the Volume and " <<
	"Surface Area of a regular hexagonal prism." << endl << endl;
}


void unitSelect() {
    introduction();
    
    while (::loop1 == true)
    cout << "Please enter your unit of measurement below. Only compatible with cm, mm, in, m\n";
    cin >> ::unit;
    
    
}


void calculate() {
    unitSelect();
}


void finalStatements(){
    calculate();
}

int main() {
	finalStatements();
    

}