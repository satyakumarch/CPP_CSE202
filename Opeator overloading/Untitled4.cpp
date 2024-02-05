#include <iostream>
using namespace std;

int MAXSIZE = 8;
int stack[8];
int top = -1;

/* Check if the stack is full */
int isFull() {
   if (top == MAXSIZE - 1)
      return 1;
   else
      return 0;
}

/* Function to insert into the stack */
void push(int data) {
   if (!isFull()) {
      top = top + 1;
      stack[top] = data;
   } else {
      cout << "Could not insert data, Stack is full." << endl;
   }
}

/* Main function */
int main() {
   int n, data;
   cout << "Enter the number of elements to push onto the stack (up to " << (MAXSIZE - top - 1) << "): ";
   cin >> n;

   for (int i = 0; i < n; i++) {
     // cout << "Enter element " << i + 1 << ": ";
      cin >> data;
      push(data);
   }

   cout << "Stack Elements: " << endl;

   // Print stack data
   for (int i = 0; i <= top; i++) {
      cout << stack[i] << " ";
   }

   cout << endl;

   return 0;
}


