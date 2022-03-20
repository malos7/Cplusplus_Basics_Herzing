// Jordan McClure "Unit 5"

#include <iostream>
using namespace std;



int main() {
	int a, x;
	double b, y, c;

	cout << "Enter two numbers. \n";
	cout << "First Number:\t";
	cin >> a;
	cout << "Second Number:\t";
	cin >> b;

	try {
		
		if (a < b) {
			c = a;
			throw c;
		}
		else {
			throw b;
		}
	}
	catch (double y) {
		cout << "Double was caught\n";
	}
	catch (int x) {
		cout << "Integer was caught \n";
	}

	return 0;
}