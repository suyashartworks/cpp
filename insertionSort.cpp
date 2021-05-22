// Code by Suyash Mudiya
// Insertion sort
// This sorting algorithm is like picking up the elements and checking it to its predecessor and placing it in its correct position.

#include <iostream>
using namespace std;

int main()
{
    // Declaring all variables
    int numberOfElements, elements[1000], key, swappingElement;

    // Taking input
    cout << "Insertion Sort\n";
    cout << "Enter the number of elements : ";
    cin >> numberOfElements;
    cout << "Now enter the elements of your array : ";
    for (int i = 0; i < numberOfElements; i++)
    {
        cin >> elements[i];
    }

    // Printing array before sorting
    cout << "Array before sorting : ";
    for (int i = 0; i < numberOfElements; i++)
    {
        cout << elements[i] << " ";
    }
    cout << endl;

    // Using the insertion sort algorithm sorting the input array
    for (int i = 0; i < numberOfElements - 1; i++)
    {
        key = elements[i + 1];
        for (int j = i; j >= 0; j--)
        {
            if (key < elements[j])
            {
                swappingElement = key;
                elements[j + 1] = elements[j];
                elements[j] = swappingElement;
            }
        }
    }

    // Printing the sorted array
    cout << "Array after sorting : ";
    for (int i = 0; i < numberOfElements; i++)
    {
        cout << elements[i] << " ";
    }
    cout << endl;

    return 0;
}