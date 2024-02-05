#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

struct node *head; 

void int_beg(int item)
{
    struct node *p = new struct node; // Use 'new' to allocate memory for the new node
    if (p == Nullptr) // Check for allocation failure
    {
        cout << "Overflow" << endl;
        return;
    }
    p->data = item;
    p->next = head;
    head = p;
    cout << "Node inserted" << endl;
}

void inst_loc(int item, int loc)
{
    struct node *p = new struct node;
    struct node *temp;
    p->data = item;
    temp = head;
    for (int i = 1; i < loc; i++)
    {
        temp = temp->next;
        if (temp == Nullptr) // Check if loc is out of bounds
        {
            cout << "Can't be inserted" << endl;
            return;
        }
    }
    p->next = temp->next;
    temp->next = p;
    cout << "Node inserted" << endl;
}

void display(struct node *h) // Fix the display function
{
    cout << "List is: ";
    while (h != Nullptr)
    {
        cout << h->data << "->";
        h = h->next;
    }
    cout << "nullptr" << endl; // To indicate the end of the list
}

int main()
{
    int item, choice, loc;
    do
    {
        cout << "Enter item: ";
        cin >> item;
        cout << "Enter loc: ";
        cin >> loc;
        if (loc == 0)
        {
            int_beg(item);
        }
        else
        {
            inst_loc(item, loc);
        }
        display(head); // Display the list after each insertion
        cout << "Enter 0 to add more: ";
        cin >> choice;
    } while (choice == 0);

    return 0;
}

