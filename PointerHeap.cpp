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
	
	stalker = new simpleClass;

	//object in App Space
	obj.x = 10;
	obj.y = 20;
	//Obj in App space values
	cout << "X: " << obj.x << endl << "Y: " << obj.y << endl;

	//this other object is nameless, resides in the heap.
	//acccess this object using stalker/pointer
	stalker ->x = 70;
	stalker ->y = 50;

	//Nameless object in the heap
	cout << "Stalk>X: " << stalker ->x << endl << "Stalk>Y: " << 	stalker ->y << endl;

	cout << "X: " << obj.x << endl << "Y: " << obj.y << endl;

	system("pause");
	return 1;
}