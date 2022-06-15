

/* Name: Stephanie Bernades
Date: January 19, 2020
Section:
Assignment: Escape Velocity from Planet or Star Program
Due Date: January 19, 2020
About this project: This project calculates the escape velocity
Assumptions: assumes correct user input
All work below was performed by Stephanie Bernades */

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{

    //Variables
    double gravitational_constant;   //The gravitational constant
    unsigned long long int mass;    // The mass of the planet or star
    unsigned short int radius;      // The radius of the planet or star
    unsigned short int escape_velocity;  // The escape velocity

    //Set the formatting for the numbers
    cout << right <<setprecision(15) << fixed << showpoint;


    //Welcome message
    cout << "Welcome to the escape velocity program... \n ";

    //Ask the user to enter the gravitational constant, mass and radius of
    // the planet or star
    cout <<"Please enter in the gravitational constant \n ";
    cout << "Gravitational Constant: ";
    cin >> gravitational_constant;
    cout <<"Please enter in the mass \n";
    cout << "mass:";
    cin >> mass;
    cout <<" Please enter in the radius \n ";
    cout << "radius:";
    cin >> radius;

    //Calculate the escape velocity
    escape_velocity = sqrt((2* gravitational_constant * mass)/radius);


    //Display the calculated data
    cout <<"The Gravitational Constant is ";
    cout << gravitational_constant; cout <<". \n";
    cout << "The Mass of the plane is  ";
    cout << mass; cout <<". \n";
    cout << "The Radius of the planet or star is  ";
    cout << radius; cout << ".\n";
    cout << "The Escape Velocity is  ";
    cout << escape_velocity;


    return 0;
}
