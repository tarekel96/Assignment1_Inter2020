#include <iostream>
#include <cmath>
using namespace std; 

int main() {

    /* initialize variables */
    float itemCost = 0.0;
    int YEARS = 0;
    float inflRate = 0.0;

    /* prompt user for values of the variables */
    cout << "Current cost of the item: " << endl;
    cin >> itemCost;

    cout << "Years from now that the item will be purchased: " << endl;
    cin >> YEARS;

    cout << "Enter the inflation rate as a percentage (exclude % sign): " << endl;
    cin >> inflRate;

    /* convert the inflation percentage rate to an inflation decimal rate */
    inflRate = inflRate * 0.010;

    /* for loop here to incr the item cost over the amt of years & acct for infl rate */

    for(int i = 0; i < YEARS; ++i) {

        itemCost = (itemCost * inflRate) + itemCost;
      
    }

    /* show user the exact cost of item before rounding the float number down */
    cout << "Cost of item before rounding down: " << itemCost << endl;

    /* the algorithm for rounding down to two decimal places */
    itemCost = itemCost * 100; /* temporarily moves the decimal place two spots left */
    itemCost = floor(itemCost); /* floor from cmath library is used to round the number down */
    itemCost = (itemCost / 100); /* moves the decimal place to right place */

    /* show user the final cost of the item after rounding */
    cout << "The final price of the item will be: " << itemCost << endl;
    
    return 0;

}