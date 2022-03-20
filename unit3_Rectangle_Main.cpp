#include "Rectangle.h"
#include <iostream>
using namespace std;





	int main() {

		float width;
		float length;
		string choice = "y";
		do {
			
			cout << "Please enter the length of the rectangle (0-20): \n";
			cin >> length;
			cout << "Please enter the width of the rectangle (0-20): \n";
			cin >> width;

			Rectangle rectangle(length, width);

			cout << "Area of the rectangle " << rectangle.getArea() << "\n";
			cout << "Perimeter of the rectangle " << rectangle.getPerimeter() << "\n";

			cout << "Continue (y/n)?";
			cin >> choice;
		} while (choice == "y");

		return 0;
	}