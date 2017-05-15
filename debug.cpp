////////////////////////////////////////////////////////////////////////
// This program reads five numbers from the keyboard, and prints out the
// average and the maximum value
///////////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

// Global Constants

const int MAX = 5;

// Function Prototypes

double GetAverage(const int IntArray[], const int Max);

int GetMax(const int IntArray[], const int Max);


int main() {

	int Values[MAX];
	int i;


	cout << "Enter five numbers: " << endl;

	// First we read in the numbers.

	for (i = 0; i < MAX; i++)
	{
		cout << "Enter the next number : ";
		cin >> Values[i];
	}


	// Now we echo the input back to the user

	for (i = 0; i < MAX; i++)
	{
		cout << "Value [ " << i << "] is : " << Values[i] << endl;
	}


	// Now lets call a function to get the average:

	cout << "The average is " << GetAverage(Values, MAX) << endl;


	// Finally we can get the maximum value

	cout << "The Maximum value is : " << GetMax(Values, MAX) << endl;

	return 0;

} // End of Main



double GetAverage(const int IntArray[], const int Max)
{
	double temp = 0.0;

	for (int i = 0; i < Max; i++)
		temp += IntArray[i];

	temp /= Max;

	return temp;

} // End of GetAverage


int GetMax(const int IntArray[], const int Max)
{
	int Biggest = IntArray[0];

	for (int i = 1; i < Max; i++)
		if (Biggest > IntArray[i])
			Biggest = IntArray[i];

	return Biggest;

} // End of GetMax()
