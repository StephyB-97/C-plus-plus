#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main ()
{

    //Welcome message
    cout <<"Welcome to the compute PI program..." << endl;


    //Set variable and constants
    double numerator=4.0;
    double denominator= 1.0;
    double fraction = 1.0;
    double pi= 0.0;
    int seqnum;

    //ask the user to enter the sequence number
    cout <<"What is the sequence number? "<< endl;
    cin >> seqnum;

    while (seqnum <0)
    {
        //ask user to enter a value again that is acceptable in the range
        cout <<" What is the sequence number? (must be an integer > 0)"<< endl;
        cin >> seqnum;

    }
    for (int i=1; i <seqnum; i++) {
        fraction = numerator / denominator;   //calculates
        if (i % 2) // determine if loop count is odd or even
            pi += fraction; //adds fraction to pi if loop count is odd
        denominator += 2;   //denominator will be adding per two

    }
    //Set the config to display set numbers of digits past the decimal
    cout << fixed << showpoint;
    cout << pi <<endl;


    }

