#include  <iostream>
using namespace std;

void factorial(int x) {
	int product =1;

	for (int i=1; i<=x; i++){
		product *= i; //product = product * 1; 
	}
	cout << "Factorial : " <<product << endl;

	return;
}
void hanoi (int N, char S, char A, char D){
	//Anchor Value
	if (N==1)
		cout << "Move " << N << " from " << S << " to " << D << endl;
	//Progress to Base Case
	else {
		hanoi(N-1, S, A, D);
		cout << " Move " << N << " from " << S << " to " << D << endl;
		hanoi(N-1, A, D, S);
	}
	return;
}
int factorialRecursion(int x){
	//1. Anchor value - NEED
	cout << "Recursion " << endl;
	if (x==1 || x==0)
		return 1;
	//2. Make progress towars that anchor value
	else {
		return x*factorialRecursion(x-1);
	}
}

int main(){
	int x=0;
	//x goes through a series of ops
	cout << "Value of x now: " << x << endl;
	cout << "Address of x is: " << &x << endl;

	//pointer
	int y=10;
	int *ptr;
	ptr = &y;

	//y goes through a series of ops
	cout << "value of y is : " << y << endl;
	cout << "address of y is : " << &y << endl;
	cout << "ptr is : " << ptr << endl;
	cout << "when ptr goes to y, sees " << *ptr << endl;

	y=20;
	cout << "ptr is : " << ptr << endl;
	cout << "when ptr goes to y, sees " << *ptr << endl;
	cout << "value of y is : " << y << endl;
	
	cout << "Enter a number: " << endl;
	cin >> x;

	factorial(x);
	factorialRecursion(x);

	int input=0;
	while (input == 0)
	{
	int N; //number of disks
	cout << "How many disks? " << endl;
	cin >> N;
	char S = 'S';
	char D = 'D';
	char A = 'A';

	hanoi (N, S, A, D);
	cout << "input?" << endl;
	cin >> input;
	}
	return 1;
}