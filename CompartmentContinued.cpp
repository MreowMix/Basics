#include <iostream>;
using namespace std;

class compartment
{
public:
	int value;
	compartment *next;

	compartment() {
		value = -1;
		//MUST BE NULL
		//objects are null by default, we have to make it.
		next = NULL;
	}
};

int main()
{
	compartment *pointer , *traverse; //pointer is in the app space, only variable in app space.
	pointer = new compartment; //nameless obj in heap
	pointer -> value = 10; //set value of obj in heap to 10 (default: -1)

	//create another nameless obj, such that the first one connects tot the second one
	pointer -> next = new compartment;
	pointer -> next -> value = 20;

	pointer -> next -> next = new compartment;
	pointer -> next -> next -> value = 30;
	/*
	/*traverse this struction
	/*1. set traverse to prt, or whatever you call your "head" pointer
	/*2. using traverse, keep going forward one node at a time
	/*3. To exit the loop, make sure traverse -> next == NULL;
	/*traverse this list using loops
	*/

	for (traverse = pointer; traverse != NULL; traverse = traverse -> next)
	{
		cout << traverse -> value << "-->";
	}
	cout << "NULL" << endl;

	traverse = pointer; //step 1
	while(traverse !=NULL)
	{
		cout << traverse ->value << "-->";
		traverse = traverse -> next;
	}
	cout << "NULL" << endl;

	cout << "Here's my little train: " << endl;
	cout << pointer -> value << " ~> " << pointer -> next -> value << " ~> " << pointer -> next -> next -> value << " ~> NULL" << endl;

	//Deletion of chunk
	//if deleting the last one, MUST set equal to NULL to end the chain
	//pointer -> next -> next = NULL;
	compartment *temp;
	temp = pointer; //temp points to first chunk
	pointer = pointer -> next; //move pointer away
	delete temp; //gets rid of first chunk;
	
	//Addition of chunk
	temp = new compartment;
	temp -> value = 10;
	temp -> next = pointer;
	pointer = temp;

	//Delete 20
	temp = pointer -> next;
	pointer ->next = pointer -> next -> next;
	delete temp;

	cout << "Here's my little train: " << endl;
	cout << pointer -> value << " ~> " << pointer -> next -> value <</* " ~> " << pointer -> next -> next -> value << */ " ~> NULL" << endl;

	system("pause");
	return 1;
}