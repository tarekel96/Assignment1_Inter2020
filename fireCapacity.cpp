# include <iostream>
using namespace std;

/* */

/* entry point of the application */
int main() {

    /* initalize maxCap - represents meeting room max cap */
    int maxCap = 0;

    /* initialize numPeople - represents num people meeting */
    int numPeople = 0;

    /* get values for variables from user */
    cout << "Enter the max capacity of meeting room: " << endl;
    cin >> maxCap;

    cout << "Enter the number of people attending the meeting: " << endl;
    cin >> numPeople;

    if(numPeople <= maxCap) {

        /* initialize leftOver - represents amt more people can attend */
        int leftOver = 0;

        leftOver = maxCap - numPeople;

        cout << "PASS: It is legal to have the meeting." << endl << leftOver <<" more people can still attend it." << endl;

    } else {
        /* initializw overMax - represents amt people over capacity */
        int overMax = 0;
        
        overMax = numPeople - maxCap;

        cout << "WARNING: It is illegal to hold the meeting." << endl << overMax << " many people must not attend the meeting to meet the law." << endl;
    }

    /* must return an int to stop main function process */
    return 0;
}