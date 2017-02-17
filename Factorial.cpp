#include  <iostream>
using namespace std;

void factorial(int x) {
	int product =1;

	for (int i=1; i<=x; i++){
		product *= i; //product = prouduct * 1; 
	}

	cout << "Factorial : " <<product << endl;

	int num = 0;
	
	for (int i=x-1; i <= 0; i--)
	{
		num = i*x + num;
	}

	cout << num << endl;

	return;
	cin.get();
};

int main(){
	int x;
	cout << "Enter a number: " << endl;
	cin >> x;
	factorial(x);

	return 1;

	system("pause");
}