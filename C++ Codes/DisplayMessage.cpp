/*Task 1: Display Message". The goal is to write a 
"Function that takes input in the form of message from user 
and display it on console*/

 #include<iostream>
#include<string>
using namespace std;

void user(string message);
void user(string message)
{
	getline(cin, message);
}

int main()
{
	string message;
	cout << "Enter message: ";
	getline(cin, message);
	cout << "You entered: ";
		user(message);
	return 0;
}