
#include <iostream>
using namespace std;
int func(int base, int exponent);

int main()
{
	int base=0,exponent=0;
	cout << "Enter base: " << endl;
	cin >> base;
	cout << endl;
	cout << "Enter exponent: " << endl;
	cin >> exponent;
	cout << base << "*" << exponent << " = " << func(base,exponent);
}
int func(int base,int exponent)
{
	if (exponent > 1)
	{
		return base * (func(base, exponent - 1));
	}
	return base;
}
