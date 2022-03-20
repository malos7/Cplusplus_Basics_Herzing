// Jordan McClure "Erasing characters from a string"

#include <iostream>
#include <string>
using namespace std;

int main() {
	string x;
	int pos;

	cout << "Erasing by and BY from a string \n";
	cout << "Enter your sentence \n";
	cin >> x;


	pos = x.find("by");
	while (pos >= 0) {
		x.erase(pos, 2);
		pos = x.find("by");
	}

	pos = x.find("BY");
	while (pos >= 0) {
		x.erase(pos, 2);
		pos = x.find("BY");
	}
	cout << "\n" << x;


	return 0;
}