/* Name: Stephanie Bernades
Date: Feb 4, 2020
Section:
Assignment: Deficient numbers program
Due Date: feb 2, 2020
About this project: This program allows user to find if a number is deficient or no
Assumptions: numbers entered are greater than 0
All work below was performed by Stephanie Bernades */

#include <iostream>

using namespace std;

int main() {

    //Welcome message
    cout << "Welcome to the Deficient Number Program\n";

    // Variable that will hold the number entered by the user
    int num, sumOfDivisor;
    int counter, sum;
    sum = sumOfDivisor;
    const int maxvalue = num;
    char answer;

    //Ask user to enter the number greater than 0
    cout << "Please enter a number (>=0): \n";
    cin >> num;

    //Input validation number
    while (num < 0) {
        cout << " Valid input\n";

        //prompt for a number again
        cout << "Please enter a number (>=0): \n";
        cin >> num;
    }

    //get the divisors of the number
    for (counter = 1; counter <= maxvalue;counter++) {
        if (counter < sum) {

            cout << num;
            cout << " is a deficient number";
        } else {

            cout << num;
            cout << " is not a deficient number.\n";
        }
        break;
    }

    cout << "\n";
    cout << "Would you like to try again?\n";
    cin >> answer;
    if (answer == 'y' || answer == 'Y') {
        cout << "Please enter a number (>=0): \n";
        cin >> num;
        {
            //get the divisors of the number
            for (counter = 1; counter <= maxvalue; counter++) {
                if (counter < sum) {

                    cout << num;
                    cout << " is a deficient number";
                } else {

                    cout << num;
                    cout << " is not a deficient number.\n";
                }
                break;
            }

        }
    }
    else
    {
        cout <<"Thanks!\n";
    }


}
