#include "Rectangle.h"
#include <iostream>
using namespace std;

Rectangle::Rectangle() {
	width = 1;
	length = 1;
};

Rectangle::Rectangle(float l, float w) {
	
	setLength(l);
	setWidth(w);
};

void Rectangle::setLength(float l) {
	if (l > 0 && l < 20) {
		length = l;
	}
	else {
		cout << "Invalid input for height \n";
		exit(1);
	}
}

void Rectangle::setWidth(float w) {
	if (w > 0 && w < 20) {
		width = w;
	}
	else {
		cout << "Invalid input for width \n";
		exit(1);
	}

}