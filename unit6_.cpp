//JORDAN MCCLURE
#include <iostream>
using namespace std;
#include "stack.h"

int main()
{
	Stack<char> charStack;

	char str[40];

	cout << "Input a string to be reversed : ";

	cin >> str;

	for (int i = 0; str[i]; i++) {
		charStack.push(str[i]);
	}

	cout << "The reverse is: ";
	charStack.printStack();

	return 0;

}