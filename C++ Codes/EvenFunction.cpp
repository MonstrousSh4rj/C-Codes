#include<iostream>
using namespace std;
int num(int);
int num(int even)
{
	bool output;
	if (even % 2 == 0)
	{
		output = 1;
	}
	else {
		output = 0;
	}
	return output;
}
int main()
{
	int number;
	cout << "Enter number: ";
	cin >> number;
	bool output = num(number);
	if (output == 1)
	{
		cout << "Its even ";
	}
	else {
		cout << "its not";
	}
	return 0;

}