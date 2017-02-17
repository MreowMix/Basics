#include <iostream>
using namespace std;

class simpleClass
{
	public: 
		int x, y;

		simpleClass() {
			x=0;
			y=0;
		}

		void simpleFunction(){
			cout << "X: " << x << endl << "Y: " << y << endl;
		}
		//end class with semicolon**
};

int main()
{
	simpleClass obj;
	//arrow operator
	simpleClass *stalker;
	int var;
	int *ptr;

	ptr = &var;
	*ptr = 30;

	stalker = &obj;

	//object, coupled with the "." operator can access attributes and functions
	//dot operator
	obj.x = 20;
	obj.y = 10;
	obj.simpleFunction();	

	//ptr and var are same type (int)
	//ptr = &var;

	cout << "VAR " << var << endl;
	cout << "*PTR " << *ptr << endl;
	cout << "PTR " << ptr << endl;
	cout << "Stalker " << stalker << endl;

	//arrow operator used by pointers to an object. Access local variables and ucntions
	//start ~> navigate ~> where this is
	stalker -> x = 30;
	stalker -> y = 40;

	cout << "obj's x is now: " << obj.x << endl;
	cout << "obj's y is now: " << obj.y << endl;

	system("pause");
	return 1;
}