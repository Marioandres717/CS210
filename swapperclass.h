#include <iostream>
using namespace std;

template<typename T>
class my_class
{
	T x;
	T y;
public:
	my_class(T a, T b);
	void swapper();
	void printem();
};
