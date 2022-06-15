/* Name: Stephanie Bernades
Date: March 29, 2020
Section:...
Assignment: Movie Statistics Program
Due Date: March 29, 2020
About this project: This program gathers statistics about the number of movies college students
 see in a month
Assumptions: All inputs are valid
All work below was performed by Stephanie Bernades */


#include <iostream>

using namespace std;

// Function prototype
void InputData(int *, int);
void SelectionSort(int *, int);
double CalcAverage(int *, int);
int calcMode(int *, int);

int main()
{
    // variables
    int *Movies, Students, Mode;
    double Average, Med;


    // welcome message
    cout <<"Movie Statistics Program"<< endl;

    // Ask user to input the number of students
    cout << "Please enter in the number of students: ";
    cin	 >> Students;

    Movies = new int[Students];         //array that holds the values

    InputData(Movies, Students);                    //function that related the number of movies to each student

    SelectionSort(Movies, Students);              //needed to arrange in an organized way

    Average = CalcAverage(Movies, Students);     //Average

    Mode = calcMode(Movies, Students);           //Mode




    //Result that is going to be displayed
    cout << "Average is " << Average << endl;
    cout << "Mode is " << Mode << endl;

    delete [] Movies;
    Movies = 0;

    return 0;
}



//   Definitions of all the functions



//*******************************************************************************
//                                  InputData                                   *
// takes in a pointer to the array of integers as a parameter, loops through    *
// each element in the array and prompts the user for a valid number of movies  *
// seen (>=0 and <=30) and stores these values in the array of integers.        *
//*******************************************************************************
void InputData(int *array, int size)
{
    cout << "Please enter in the number of students \n";
    for (int i = 0; i < size; i++)
    {
        cout << "Student " << (i + 1) << ": ";
        cin  >> *(array + i);
    }
}

//*******************************************************************************
//                                    SelectionSort                             *
// This function performs an ascending-order selection sort on array. The       *
// parameter size holds the number of elements in the array.                    *
//*******************************************************************************
void SelectionSort(int *array, int size)
{
    int scan, minIndex, minValue;

    for (int scan = 0; scan < (size - 1); scan++)
    {
        minIndex = scan;
        minValue = *(array + scan);
        for (int i = scan + 1; i < size; i++)
        {
            if (*(array + i) < minValue)
            {
                minValue = *(array + i);
                minIndex = i;
            }
        }
        *(array + minIndex) = *(array + scan);
        *(array + scan) = minValue;
    }
}

//*******************************************************************************
//                                  CalcAverage                                 *
// takes in a pointer to the array of integers as a parameter, computes and     *
// returns the average of the values stored in the array.                       *
//*******************************************************************************
double CalcAverage(int *array, int size)
{
    double Sum = 0;
    for (int i = 0; i < size; i++)
    {
        Sum += *(array +i);
    }
    return Sum / size;
}



//*******************************************************************************
//                                  calcMode                                     *
//  takes in a pointer to the array of integers as a parameter, computes and     *
//  returns the mode of the values stored in the array.                          *
//*******************************************************************************
int calcMode(int *array, int size)
{
    int Mode, Most, Count;
    Count = Most = 0;

    for (int i = 0; i < size; i++)
    {
        Count++;
        if (*(array + i) < *(array + i + 1))
        {
            if (Count > Most)
            {
                Mode = *(array + i);
                Most = Count;
            }
            Count = 0;
        }
    }
    return Mode;
}


