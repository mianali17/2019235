// Task1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int func(int num);
int main()
{
	int num;
	cout << "Enter number"<<endl;
	cin >> num;
	cout << "sum of natural numbers is : " << func(num);
	return 0;
}
int func(int num)
{
	if (num == 0)
		return 0;
	else
		return num + func(num + 1);
}

