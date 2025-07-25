#include <iostream>
using namespace std;

int main() {
    int time, wage;
    double gross_pay, taxes, net_pay;

    cout << "Enter hours worked in a week: ";
    cin >> time;
    cout << "Enter the hourly wage in dollars: ";
    cin >> wage;

    // Calculate gross pay
    if (time > 40) {
        gross_pay = (40 * wage) + ((time - 40) * 1.5 * wage);
    } else {
        gross_pay = time * wage;
    }

    // Calculate taxes
    if (gross_pay <= 600) {
        taxes = gross_pay * 0.15;
    } else {
        taxes = (600 * 0.15) + ((gross_pay - 600) * 0.2);
    }

    // Net pay
    net_pay = gross_pay - taxes;

    // Output results
    cout << "Gross pay: $" << gross_pay << endl;
    cout << "Taxes: $" << taxes << endl;
    cout << "Net pay: $" << net_pay << endl;

    return 0;
}