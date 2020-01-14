#include <iostream>
using namespace std;

int main() {
    
    double package = 0.0;
    
    double packNeeded = 0.0;
    
    cout << "Weight of the package in ounces: ";
    
    cin >> package;
    
    packNeeded = (35273.92) / package;
    
    package = (package) /  (35273.92);
    
    cout << "One cereal package weighs: " << package << " tons." << endl;
    
    cout << packNeeded << " packages of cereal is needed to form a ton of cereal packages." << endl;
    
    return 0;
}