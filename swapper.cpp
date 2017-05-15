/*************************
program: swap two integers
LAB PART 1!
**************************/

#include <iostream>
using namespace std;

template<typename T> void swapper(T & x, T & y);
template<typename T> void printem(T& x, T& y);

int main()
{
	float myx = 3.16156, myy = 4.15616;
	int x = 99, y = 666;
	char a = 'Z', b = 'D';

	
	cout << "Floats before swapping ";
	printem(myx, myy);
	swapper(myx, myy);
	cout << "\nfloats after swapping ";
	printem(myx, myy);

	cout << "\nint before swapping ";
	printem(x, y);
	swapper(x, y);
	cout << "\nint after swapping ";
	printem(x, y);

	cout << "\nchar before swapping ";
	printem(a, b);
	swapper(a, b);
	cout << "\nchar after swapping ";
	printem(a, b);

	return 0;
}

template<typename T> 
void swapper(T & x, T & y)
{
	T TempVal = x;
	x = y;
	y = TempVal;
}
template<typename T>
void printem(T& x, T& y) {

	cout << x << " " << y << endl;
	
}