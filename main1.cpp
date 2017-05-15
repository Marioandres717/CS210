#include <iostream>
#include "swapperclass.h"
using namespace std;

int main()
{
	my_class<int> temp(3, 4);
	my_class<float> a(4.34, 99.04);
	my_class<char> b('x', 'b');
	temp.printem();
	temp.swapper();
	cout << "AFTER SWAP" << endl;
	temp.printem();
	cout << endl;
	a.printem();
	a.swapper();
	cout << "AFTER SWAP" << endl;
	a.printem();
	cout << endl;
	b.printem();
	b.swapper();
	cout << "AFTER SWAP" << endl;
	b.printem();
}