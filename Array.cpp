#include <iostream>
#include <fstream>
#include <string>;
using namespace std;

#define MAX 100 
//Calculates GPA of semester

int main()
{
	int array[15];
	double min, max=0, avg, med, sum=0;

	cout << "Enter 15 numbers" << endl;
	for (int a=0; a<15; a++)
	{
		cin >> array[a];
		sum = sum + array[a];
	}

	for (int b=0; b<15;b++)
	{
		if (array[b] > max)
			max = array[b];
	}
	min = max;

	for (int c=0; c<15; c++)
	{
		if (min > array[c])
			min = array[c];
	}
	
	
	med = (min + max)/2;
	avg = sum/15;

	cout << "Min: " << min << endl;
	cout << "Max: " << max<< endl;
	cout << "Average: " <<  avg << endl;
	cout << "Median: " << med << endl;

	cin.get();
	cin.get();
	return 1;
}