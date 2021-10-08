#include <iostream>

using namespace std;

class ListNode {
private:
	int position;
	int item;
	ListNode* next;
public:
	ListNode();
	ListNode(int n);
friend class List;
};

//ListNode constructor initialises node to store data and pointer of node to point at nothing yet
ListNode::ListNode()
{
	position = 0;
	item = 0;
	next = NULL;
}

ListNode::ListNode(int n)
{
	position = 0;
	item = n;
	next = NULL;
}

//"Engine" / Head of the list
class List {
private:
	int size;
	ListNode* head;
public:
	List();
	List(ListNode* n);
	~List();
	void prependNode(int no);
	void appendNode(int no);
	void insertNode(int p, int no);
	void deleteNodePosition(int p);
	void deleteNodeValue(int v);
	void updateNode(int p, int value);
	ListNode* nodeExists(int k);
	void printList();
	void resetPosition();
};

//Constructor sets up empty list
List::List()
{
	size = 0;
	head = NULL;
}

List::List(ListNode* n)
{
	size = 0;
	head = n;
}

//Destructor
List::~List()
{
	while (size != 0)
	{
		if (size > 0)
		{
			ListNode* temp = head;
			head = head->next;
			delete temp;
			size--;
		}
		else
		{
			cout << "List is now empty and all memory freed." << endl;
		}
	}
}

//Method 1: Check if node exists using position(key) value
ListNode* List::nodeExists(int k)
{
	ListNode* temp = NULL;
	ListNode* ptr = head;
	//Traversing list
	while (ptr != NULL)
	{
		if (ptr->position == k)
		{
			temp = ptr;
		}
		ptr = ptr->next;
	}
	return temp;
}

//Method 2: Append node (add to back) to the list.
void List::appendNode(int no)
{
		ListNode* newNode = new ListNode(no);
		//Check if no nodes exists in the linked list yet
		if (head == NULL)
		{
			head = newNode;
			size += 1; 
		}
		//There are nodes existing in the linked list. 
		else
		{
			ListNode* ptr = head;
			while (ptr->next != NULL)
			{
				ptr = ptr -> next;
			}
			ptr->next = newNode;
			size += 1;
		}
		resetPosition();
}

//Method 3: Prepend node (Add node to start of list)
void List::prependNode(int no)
{
	ListNode* newNode = new ListNode(no);
	newNode->next = head;
	head = newNode;
	size += 1;
	resetPosition();

}

//Method 4: Insert node after a particular node in the list
void List::insertNode(int p, int no)
{
	ListNode* newNode = new ListNode(no);
	ListNode* ptr = nodeExists(p);
	if (ptr == NULL)
	{
		cout << "No node exists at position: " << p << endl;
	}
	else
	{
			newNode->next = ptr->next;
			ptr->next = newNode;
			size += 1;
			resetPosition();
	}
}

//Method 5: Delete node by at a position
void List::deleteNodePosition(int p)
{
	if (head == NULL)
	{
		cout << "List already empty, can't delete!" << endl;
	}
	else if (head != NULL)
	{
		ListNode* toDel = NULL;
		//If node we're deleting is the 1st one
		if (head->position == p)
		{
			//Unlinking node from linked list
			toDel = head;
			head = head->next;
			delete toDel;
			size -= 1;
			resetPosition();
		}
		//If it's in the middle/end of the list
		else
		{
			ListNode* temp = NULL;
			ListNode* prevptr = head;
			ListNode* currentptr = head->next;
			while (currentptr != NULL)
			{
				if (currentptr->position == p)
				{
					temp = currentptr;
					//exits while loop and stops traversing if position reached
					currentptr = NULL;
				}
				else
				{
					//continue traversing if position not reached
					prevptr = prevptr->next;
					currentptr = currentptr->next;
				}
			}
			if (temp != NULL)
			{
				//Unlinks previous node from current node
				prevptr->next = temp->next;
				toDel = temp;
				delete toDel;
				size -= 1;
				resetPosition();
			}
			else
			{
				cout << "Node doesn't exist" << endl;
			}
		}
	}
}

//Method 6: update node value by position number
void List::updateNode(int p, int value)
{
	ListNode* ptr = nodeExists(p);
	if (ptr != NULL)
	{
		ptr->item = value;
		cout << "Node value updated successfully" << endl;
	}
	else
	{
		cout << "Node doesn't exist" << endl;
	}
}

//Method 7: printing linked list
void List::printList()
{
	if (head == NULL)
	{
		cout << "List is empty" << endl;
	}
	else
	{
		cout << "Linked List values: " << endl;
		ListNode* temp = head;

		while (temp != NULL)
		{
			cout << "(" << temp->position << ", " << temp->item << ")" << endl;
			temp = temp->next;
		}
		cout << "Size: " << size << endl;
	}
}

//Method 8: Reset Position
void List::resetPosition()
{
	ListNode* ptr = head;
	for (int i = 1; i <= size; i++)
	{
		if (ptr->position != i)
		{
			ptr->position = i;
		}
		ptr = ptr->next;
	}
}

//Method 9: Delete node by item
void List::deleteNodeValue(int v)
{
	if (head == NULL)
	{
		cout << "List already empty, can't delete!" << endl;
	}
	else if (head != NULL)
	{
		ListNode* toDel = NULL;
		//If node we're deleting is the 1st one
		if (head->item == v)
		{
			//Unlinking node from linked list
			toDel = head;
			head = head->next;
			delete toDel;
			size -= 1;
			resetPosition();
		}
		//If it's in the middle/end of the list
		else
		{
			ListNode* temp = NULL;
			ListNode* prevptr = head;
			ListNode* currentptr = head->next;
			while (currentptr != NULL)
			{
				if (currentptr->item == v)
				{
					temp = currentptr;
					//exits while loop and stops traversing if position reached
					currentptr = NULL;
				}
				else
				{
					//continue traversing if position not reached
					prevptr = prevptr->next;
					currentptr = currentptr->next;
				}
			}
			if (temp != NULL)
			{
				//Unlinks previous node from current node
				prevptr->next = temp->next;
				toDel = temp;
				delete toDel;
				size -= 1;
				resetPosition();
			}
			else
			{
				cout << "Node doesn't exist" << endl;
			}
		}
	}
}

int main()
{
	List l;
	int option, data, position;
	do {
		cout << "\nWhat operation do you want to perform? Select Option number. Enter 0 to exit." << endl;
		cout << "1. appendNode()" << endl;
		cout << "2. prependNode()" << endl;
		cout << "3. insertNodeAfter()" << endl;
		cout << "4. deleteNodeByPosition()" << endl;
		cout << "5. deleteNodeByValue()" << endl;
		cout << "6. updateNode()" << endl;
		cout << "7. printList()" << endl;
		cout << "8. clearScreen()" << endl << endl;

		cin >> option;

		switch (option) {
		case 0:
			break;
		case 1:
			cout << "Append Node (add to back) \nEnter data of the Node to be Appended" << endl;
			cin >> data;
			l.appendNode(data);
			//cout<<n1.key<<" = "<<n1.data<<endl;
			break;

		case 2:
			cout << "Prepend Node (add to front) \nEnter key & data of the Node to be Prepended" << endl;
			cin >> data;
			l.prependNode(data);
			break;

		case 3:
			cout << "Insert Node After Operation \nEnter position of existing Node after which you want to Insert this New node: " << endl;
			cin >> position;
			cout << "Enter data of the New Node first: " << endl;
			cin >> data;

			l.insertNode(position, data);
			break;

		case 4:

			cout << "Delete Node by position - \nEnter Position of the Node to be deleted: " << endl;
			cin >> position;
			l.deleteNodePosition(position);

			break;

		case 5:
			cout << "Delete Node by value - \nEnter value of the Node to be deleted: " << endl;
			cin >> data;
			l.deleteNodeValue(data);

			break;

		case 6:
			cout << "Update Node By Position - \nEnter position & NEW data to be updated" << endl;
			cin >> position;
			cin >> data;
			l.updateNode(position, data);

			break;
		case 7:
			l.printList();
			break;

		case 8:
			system("cls");
			break;

		default:
			cout << "Enter Proper Option number " << endl;
		}
	} while (option != 0);
}