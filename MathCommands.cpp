//Program finds: minimum and maximum value in addition to count, sum, and average
#include <iostream>
using namespace std;	
	
int main()
{
	int userInput, total, count, minimum, maximum;
	userInput = 0;
	count = 0;
	total = 0;
	minimum = 0;
	maximum = 0;
	
	while (userInput != -1)
	{
		cout << "Enter a value (-1 to Exit): " << endl;
		cin >> userInput;
		if (userInput == -1)
			break;
		else 
		{
			count ++;
			total += userInput;
		}
		if (userInput > maximum)
			maximum = userInput;
		if (count == 1)
			minimum = maximum;
		if (userInput < minimum)
			minimum = userInput;
	}

	float average = (double)total/count;
	
	cout << "Stats: " << endl;
	cout << "You entered a total of: " << count << endl;
	cout << "The sum of all your numbers: " << total << endl;
	cout << "The average value of your numbers: " << average << endl;
	cout << "The minimum value of your numbers: " << minimum << endl;
	cout << "The maximum value of your numbers: " << maximum << endl;

	cin.get();
	cin.get();
	return 1;
}