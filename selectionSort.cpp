// Code by Suyash Mudiya
#include <iostream>
using namespace std;

int main()
{
    // Declaring all variables
    int numberOfElements, elements[1000], minimumElement, swappingElement, index;

    // Taking input
    cout << "Selection sort\n";
    cout << "Enter the number of elements in your elements array : ";
    cin >> numberOfElements;
    cout << "Now enter the elements : ";
    for (int i = 0; i < numberOfElements; i++)
    {
        cin >> elements[i];
    }

    // Printing the array before sorting
    cout << "Array before sorting : ";
    for (int i = 0; i < numberOfElements; i++)
    {
        cout << elements[i] << " ";
    }
    cout << endl;

    // Using the selection sort algorithm sorting the array 'elements'
    for (int i = 0; i < numberOfElements; i++)
    {
        minimumElement = elements[i];
        index = i;
        for (int j = i + 1; j < numberOfElements; j++)
        {
            if (minimumElement > elements[j])
            {
                minimumElement = elements[j];
                index = j; //storing the index of minimum element in variable 'index'
            }
        }
        //swapping of element at index = i to element at index = index of minimum element
        elements[index] = elements[i];
        elements[i] = minimumElement;
    }

    // Printing the array after sorting
    cout << "Array after sorting : ";
    for (int i = 0; i < numberOfElements; i++)
    {
        cout << elements[i] << " ";
    }
    cout << endl;

    return 0;
}