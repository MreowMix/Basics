#include <iostream>
#include <string>
using namespace std;

class myClass
{
	string command;

public: 
	void getOperation()
	{
		cout << "Summation(sum) or Subtraction(sub)?" << endl;
		cin >> command;

		if (command == "sum")
		{
			double num1, num2, num3;
			cout << "Enter 3 numbers" << endl;
			cin >> num1;
			cin >> num2;
			cin >> num3;
			cout << "Your sum is: " << summation(num1, num2, num3) << endl;
		}
		else if (command == "sub")
		{
			double num1, num2, num3;
			cout << "Enter 3 numbers" << endl;
			cin >> num1;
			cin >> num2;
			cin >> num3;
			cout << "Your difference is: " << subtraction(num1, num2, num3) << endl;
		}
		else
		{
			cout << "ERROR: Invalid command" << endl;
		}

	}
	void summation(double a, double b, double c)
	{
		double sum;
		sum = a + b + c;
		//return sum;
	}
	double subtraction(double a, double b, double c)
	{
		double diff;
		diff = a - b - c;
		return diff;
	}
};

int main()
{
	myClass function;

	while(1)
	{
		function.getOperation();
	}

	cin.get();
	cin.get();
	return 1;
}