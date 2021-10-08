#include<iostream>
#include<string>

using namespace std;

class Stack{
	private:
		//Keep track of number of entries in the stack
		int top;
		int arr[5];
		
	public:
		//Constructer sets parameters when stack object is called
		Stack ()
		{
			top = -1;
			//Set all entries in array as 0
			for (int i = 0; i < 5; i++) {
				arr[i] = 0;
			}
		}
		
		//Checks if stack is empty
		bool isEmpty()
		{
			if (top == -1) {
				return true;
			}
			else {
				return false;
			}
		}
		
		//Checks if stack is full
		bool isFull()
		{
			if (top == 4) {
				return true;
			}
			else {
				return false;
			}
		}
		
		//Add value to top of stack
		void push(int val) 
		{
			//First need to check if stack is full
			if (isFull()) {
				cout << "Stack Overflow" << endl;
			}
			else {
				top += 1;
				arr[top] = val;
			}
		}
		
		//Removes value at top of stack
		int pop()
		{
			if (isEmpty()) {
				cout << "Stack Underflow" << endl;
				return 0;
			}
			else {
				int popValue = arr[top];
				arr[top] = 0;
				top -= 1;
				return popValue; 
			}
		}
		
		//Counts the number of items in the stack
		int count()
		{
			return (top + 1);
		}
		
		//Gets data stored at specified position in the stack
		int peek(int pos)
		{
			if (isEmpty()) {
				cout << "Stack Underflow" << endl;
				return -1;
			}
			else {
				return arr[pos];
			}
		}
		
		//Changing value of the stack at a particular position
		void change (int pos, int val)
		{
			arr[pos] = val;
			cout << "Value changed at location" << pos << endl;
		}
		
		//prints all values in the stack from top to bottom
		void display()
		{
			cout << "All values in the stack are: " << endl;
			for (int i = 4; i >= 0; i--) {
				cout << arr[i] << endl;
			}
		}
};

int main()
{
	Stack s1;
  int option, postion, value;
 
  do {
    cout << "What operation do you want to perform? Select Option number. Enter 0 to exit." << endl;
    cout << "1. Push()" << endl;
    cout << "2. Pop()" << endl;
    cout << "3. isEmpty()" << endl;
    cout << "4. isFull()" << endl;
    cout << "5. peek()" << endl;
    cout << "6. count()" << endl;
    cout << "7. change()" << endl;
    cout << "8. display()" << endl;
    cout << "9. Clear Screen" << endl << endl;
 
    cin >> option;
    switch (option) {
    case 0:
      break;
    case 1:
      cout << "Enter an item to push in the stack" << endl;
      cin >> value;
      s1.push(value);
      break;
    case 2:
      cout << "Pop Function Called - Poped Value: " << s1.pop() << endl;
      break;
    case 3:
      if (s1.isEmpty())
        cout << "Stack is Empty" << endl;
      else
        cout << "Stack is not Empty" << endl;
      break;
    case 4:
      if (s1.isFull())
        cout << "Stack is Full" << endl;
      else
        cout << "Stack is not Full" << endl;
      break;
    case 5:
      cout << "Enter position of item you want to peek: " << endl;
      cin >> postion;
      cout << "Peek Function Called - Value at position " << postion << " is " << s1.peek(postion) << endl;
      break;
    case 6:
      cout << "Count Function Called - Number of Items in the Stack are: " << s1.count() << endl;
      break;
    case 7:
      cout << "Change Function Called - " << endl;
      cout << "Enter position of item you want to change : ";
      cin >> postion;
      cout << endl;
      cout << "Enter value of item you want to change : ";
      cin >> value;
      s1.change(postion, value);
      break;
    case 8:
      cout << "Display Function Called - " << endl;
      s1.display();
      break;
    case 9:
      system("cls");
      break;
    default:
      cout << "Enter Proper Option number " << endl;
    }
 
  } while (option != 0);
}
