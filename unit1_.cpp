#include <iostream>
using namespace std;
int main()
{
	int x = 0;
	int squared = 0;
	int cubed = 0;
	
	cout << "Integer\tsquared\tcubed\n"; //Writes first line, descriptions
	
	for (x = 0; x < 11; x++)
	{
		squared = x * x;
		cubed = x * x * x;
		cout << x << "\t";
		cout << squared << "\t";
		cout << cubed << "\n";
	}

	return 0;
	
}