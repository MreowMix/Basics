#include <iostream>
//Linux exit:
//#include <stdlib>
using namespace std;

//class RecommendedItme{}
//Node is a basic building block for your structure
class Node
{
public: 
	int value;
	Node *next;

	Node() 
	{
		value = -1;
		next = NULL;
	}
};

//add and delete items from the head
//collection of nodes
class Stack 
{
public: 
	Node *top;
	
	Stack() 
	{
		top = NULL;
	}

	//adds items to stack and head(top) of list
	//two cases - 1. stack is empty --> new node iis at top 
	//2. stack has nodes in there, all we need to do is make this the top node
	//need value
	void push (int x) 
	{
		Node *temp = new Node;
		temp -> value = x;
		//top is null if stack is empty
		if(top == NULL)
			top = temp;
		else 
		{
			temp -> next = top;
			top =temp;
		}
	}
	//delete an item - always top
	void pop() 
	{
		Node *temp;
		if(top == NULL)	
		{
			cout << " Empty stack..." << endl;
			return;
		}
		else 
		{
			top = top -> next; 
			cout << " About to delete: " << temp ->value << endl;
			delete temp;
		}
	}
	void display()
	{
		Node *temp;
		cout << "Here is your stack: " << endl;
		for(temp = top; temp !=NULL; temp=temp->next)
		{
			cout << temp ->value << " -> ";
		}
		cout << " NULL" << endl;
		/*
		**while(temp){ (same meaning as temp !=NULL)
		**cout << temp->value << " -> "
		**temp = temp-> next;
		*/
	}
};

int main() 
{
	Stack stackObject;
	int choice, value;

	while (1)
	{
		cout << "Press 1 to add." << endl;
		cout << "Press 2 to delete. " << endl;
		cout << "Press 3 to display. " << endl;
		cout << "Anything else to exit. " <<endl;
		cin >> choice;

		switch (choice)
		{
		case 1: cout << "Enter the value you want to add" << endl;
					cin >> value;
					stackObject.push(value);
					break;
		case 2: stackObject.pop();
					break;
		case 3: stackObject.display();
					break;
		default: exit(1);
		}
	}


	system("pause");
	return 1;

	//queue:
	//start at end, exit at another
	//addition and deletion happen at opposite ends
	//burger line 
	//link list:
	//add items anywhere and delete anywhere
	//ex: amazon shopping cart
	//stack:
}