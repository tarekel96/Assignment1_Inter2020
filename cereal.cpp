#include <iostream>
using namespace std;

// main - entry point of the application
int main() {

    /* decimal number represents cereal box ounces weight */
    float package = 0.0;
    /* decimal number represents amt cereal boxes form one ton */
    float packNeeded = 0.0;

    cout << "Weight of the package in ounces: ";

    /* assigns user input as the value for "package" variable */
    cin >> package;

    /* 35,273.92 ounces is equal to 1 ton; divide that number by package ounces - determines packages needed for one ton */    
    packNeeded = (35273.92) / package;

    /* divide package ounces by # of ounces that form a ton to determine what a package weighs in a ton */
    package = (package) /  (35273.92);

    cout << "One cereal package weighs: " << package << " tons." << endl;
    
    cout << packNeeded << " packages of cereal is needed to form a ton of cereal packages." << endl;
    
    return 0;
}