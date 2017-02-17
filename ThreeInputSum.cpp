#include <iostream>
using namespace std;

int main()
{
	int x, y, z, sum;

	cout << "Enter three integers." << endl;
	cin >> x;
	cin >> y;
	cin >> z;

	sum = x+y+z;
	cout << "The result is: " << sum;

	cin.get();
	cin.get();
	return sum;
}