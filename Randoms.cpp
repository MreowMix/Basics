#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

int main()
{
	srand(time(NULL)); //seeds random number gen
	int number = rand(); //generates random number
	number = number%10 + 1; //guarantee that number is between 0 and 10

	//game: guesses number
	int count=0, guess;
	while (count < 3)
	{
		cout << "Enter your guess" << endl;
		cin >> guess;
		if (guess == number)
		{
			cout << "Bingo!" << endl;
			exit(1);
		}
		count++;
	}
	
	cout << "You lose, number was: " << number << endl;

	system("pause");
	return 1;
}