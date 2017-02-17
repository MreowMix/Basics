#include <iostream>
using namespace std;

int main()
{
	int y, x, *stalker; //pointer begins with asterisk!
	int hold = 0;

	cout << "test" << endl;
	while (hold == 0)
	{
		cout << "Number?  : " << endl;
		cin >> x;

		cout << "Value of x: " << x << endl;
		//Address find: ampersand
		cout << "Address of x: " << &x << endl;
		
		//Want stalker to stalk x
		stalker = &x;

		//change value of x using stalker
		cout << "Change value of x using stalker" << endl;
		//Dereferencing
		cin >> *stalker;

		/* If using "stalker", you are getting address of variable it is pointing to. If "*stalker", value of address pointed to. *stalker is foramlly known as "dereferencing" a pointer.*/

		cout << "This is stalker, without *: " << stalker << endl;
		cout << "This is stalker, with *: " << *stalker << endl;
		cout << "This is x: " << x << endl;
		cout << "Address of x: " << &x << endl;

		//FOR Y
		cout << " Y? " << endl;
		cin >> y;
		cout << "Value of y: " << y << endl;
		//Address find: ampersand
		cout << "Address of x: " << &y << endl;
		
		//Want stalker to stalk x
		stalker = &y;

		//change value of x using stalker
		cout << "Change value of y using stalker" << endl;
		//Dereferencing
		cin >> *stalker;

		/* If using "stalker", you are getting address of variable it is pointing to. If "*stalker", value of address pointed to. *stalker is foramlly known as "dereferencing" a pointer.*/

		cout << "This is stalker, without *: " << stalker << endl;
		cout << "This is stalker, with *: " << *stalker << endl;
		cout << "This is x: " << y << endl;
		cout << "Address of x: " << &y << endl;


		cout << " 0 is continue..." << endl;
		cin >> hold;
	}

	system("pause");
	return 1;
}