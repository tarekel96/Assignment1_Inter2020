# include <iostream>
using namespace std;

/* entry point of application */

int main() {

    /* initialize actualHours - represents hours user will input */
    double actualHours = 0.0;
    
    /* normal hours in a week is 40 hours */
    double normalHours = 40.0;

    /* normal hours work wage */
    double normalWage = 16.00;

    /* initialize overHours - represents amt overtime hours */
    double overHours = 0.0;

    /* initialize overWage - represents overtime hourly wage */
    double overWage = normalWage * 1.50;

    /* initialize grossPay - represents week gross pay before taxes/insur */
    double grossPay = 0.0;

    /* intialize finalPay - represents gross pay after taxes/insur */
    double finalPay = 0.0;

    /* social security tax - 6% of gross pay */
    double ssTax = 0.06;

    /* intialize ssPay - dollar amt gross pay lost from ss tax */
    double ssPay = 0.0;

    /* federal tax - 14% of gross pay */
    double fedTax = 0.14;

    /* intialize fedPay - dollar amt gross pay lost from fed tax */
    double fedPay = 0.0;

    /* state tax - 5% of gross pay */
    double stateTax = 0.05;

    /* initialize statePay - dollar amt gross pay lost from state tax */
    double statePay = 0.0;
    
    /* medical insurance - fixed $10/week */
    double medInsur = 10.0;

    cout << "Enter hours worked for the week: ";

    /* get actualHours from user which decides how the rest of program will proceed */
    cin >> actualHours;

    /* if true - disregard overtime wage, else - account for overtime hours/pay */
    if(actualHours <= normalHours) { 

        grossPay = actualHours * normalWage;

        ssPay = grossPay * ssTax;

        fedPay = grossPay * fedTax;

        statePay = grossPay * stateTax;

        finalPay = grossPay - (ssPay + fedPay + statePay + medInsur);

        cout << "Your gross salary: $" << grossPay << endl;
        cout << "Amount of Social Security tax paid: $" << ssPay << endl;
        cout << "Amount of federal tax paid: $" << fedPay << endl;
        cout << "Amount of state tax paid: $" << statePay << endl;
        cout << "Your final gross salary: $" << finalPay << endl;

    } else {

        overHours = actualHours - normalHours;

        /* grossPay takes into consideration overtime wage and hours */
        grossPay = (overHours * overWage) + (normalHours * normalWage);

        ssPay = grossPay * ssTax;

        fedPay = grossPay * fedTax;

        statePay = grossPay * stateTax;

        finalPay = grossPay - (ssPay + fedPay + statePay + medInsur);

        cout << "Your gross salary: $" << grossPay << endl;
        cout << "Amount of Social Security tax paid: $" << ssPay << endl;
        cout << "Amount of federal tax paid: $" << fedPay << endl;
        cout << "Amount of state tax paid: $" << statePay << endl;
        cout << "Your final gross salary: $" << finalPay << endl;

    }

    return 0;
}