#include <iostream>
#include "swapperclass.h"
using namespace std;

template<typename T>
my_class<T>::my_class(T a, T b)
{
	x = a;
	y = b;
}
template<typename T>
void my_class<T>::swapper()
{
	T TempVal = x;
	x = y;
	y = TempVal;
}
template<typename T>
void my_class<T>::printem() {
	cout << "First value is: " << x << " Second value is: " << y << endl;
}

template my_class<int>;
template my_class<long>;
template my_class<char>;
template my_class<double>;
template my_class<float>;

