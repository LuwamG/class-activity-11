// class activity 11.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Calculating the commission.

#include <iostream>
using namespace std;
int main()
{
    double sales;
    double commission;
    cin >> sales;
    if (sales <= 10000) {
        commission = 0.1 * sales;
        cout << "You sold " << sales << " dollars. So your commission is $" << commission << endl;
    }
    else if (sales <= 15'000) {
        commission = 0.15 * sales;
        cout << "You sold " << sales << " dollars. So your commission is $" << commission;
     }
    else if (sales > 15000) {
        commission = 0.20 * sales;
        cout << "You sold " << sales << " dollars. So your commission is $" << commission << endl;
    }
    return 0;
}


