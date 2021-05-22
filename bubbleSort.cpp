// Code by Suyash Mudiya
// Bubble Sort
// This sorting algorithm works on swapping elements in passes.
#include <iostream>
using namespace std;

int main()
{
    // Declaring all the variables
    int numberOfElements, elements[1000], swappingVariable;

    // Taking input
    cout << "Bubble Sort\n";
    cout << "Enter number of elements in your array of elements : ";
    cin >> numberOfElements;

    cout << "Now enter the elements : ";
    for (int i = 0; i < numberOfElements; i++)
    {
        cin >> elements[i];
    }

    // printing array of elements before sorting
    cout << "Input array : \n";
    for (int i = 0; i < numberOfElements; i++)
    {
        cout << elements[i] << " ";
    }
    cout << endl;

    // Bubble sorting all the elements in different passes
    for (int i = 0; i < numberOfElements; i++)
    {
        for (int j = 0; j < numberOfElements - 1; j++)
        {
            if (elements[j] > elements[j + 1])
            {
                swappingVariable = elements[j];
                elements[j] = elements[j + 1];
                elements[j + 1] = swappingVariable;
            }
        }
    }

    // Printing sorted array of elements
    cout << "Sorted array : \n";
    for (int i = 0; i < numberOfElements; i++)
    {
        cout << elements[i] << " ";
    }
    cout << endl;
    return 0;
}
