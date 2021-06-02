//Code by Suyash Mudiya
//Singly Linked List
#include <iostream>
using namespace std;

// Declaring a structure for nodes in linked list.
struct node
{
public:
    int data;
    struct node *next;
};
struct node *head = NULL;

// Insert functions to insert elements in Linked list.
void insertEnd(int value)
{
    node *newNode = new node;
    newNode->data = value;
    newNode->next = NULL;
    if (head == NULL)
    {
        head = newNode;
    }
    else
    {
        node *temp = new node;
        temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

void insertBeginning(int value)
{
    node *newNode = new node;
    newNode->data = value;
    newNode->next = NULL;
    if (head == NULL)
    {
        head = newNode;
    }
    else
    {
        node *temp = new node;
        newNode->next = head;
        head = newNode;
    }
}

void insertIndex(int value, int index)
{
    node *newNode = new node;
    newNode->data = value;
    newNode->next = NULL;
    node *front = new node;
    node *back = new node;
    front = head;
    back = front;
    while (index-- > 1)
    {
        back = front;
        front = front->next;
    }
    back->next = newNode;
    newNode->next = front;
}

// Delete function for deleting a node in a linked list by specifying position of a node.
void deleteElement(int index)
{
    node *back = new node;
    node *front = new node;
    back = head;
    front = back;
    if (head == NULL)
    {
        cout << "Linked list is empty\n";
        return;
    }
    if (front->next == NULL && index == 1)
    {
        delete front;
        head = NULL;
        return;
    }
    if (front->next != NULL && index == 1)
    {
        head = front->next;
        delete front;
        return;
    }
    while (index-- > 1)
    {
        back = front;
        front = front->next;
    }

    back->next = front->next;
    front->next = NULL;
    delete front;
}

// Function to print the Linked list.
void display()
{
    node *temp = new node;
    temp = head;
    cout << "\nYour Linked List : \n";
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    cout << "Singly Linked List\n";
    int s = 0, value, add = 0;
    //While loop for repeating the menu and waiting for the user input.2
    while (s != 9)
    {
        cout << "What do you want to do?\n1. Add a new node.\n2. Print your linked list.\n3. Delete an element.\n9. Exit\n";
        cin >> s;
        //Using switch to make a menu driven program.
        switch (s)
        {
        case 1:
            cout << "1. At beginning.\n2. At end.\n3. In between\n";
            cin >> add;
            switch (add)
            {
            case 1:
                cout << "Enter value : ";
                cin >> value;
                insertBeginning(value);
                break;
            case 2:
                cout << "Enter value : ";
                cin >> value;
                insertEnd(value);
                break;
            case 3:
                cout << "Enter value : ";
                cin >> value;
                int index;
                cout << "At what position do you want to add your element : ";
                cin >> index;
                insertIndex(value, index);
                break;
            default:
                cout << "Enter a valid choice.\n";
                break;
            }
            break;

        case 2:
            display();
            break;
        case 3:
            cout << "Enter the position you want to delete : ";
            int index;
            cin >> index;
            deleteElement(index);
            break;
        default:
            cout << "Enter a valid choice.\n";
            break;
        }
    }

    return 0;
}