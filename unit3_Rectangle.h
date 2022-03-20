#pragma once
#include <iostream>

using namespace std;
class Rectangle

{
private:
	float length;
	float width;

public:
	Rectangle();
	Rectangle(float width, float length);

	void setWidth(float);
	void setLength(float);

	float getWidth()const {
		return width;
	}
	float getLength()const {
		return length;
	}

	float getArea()const {
		float area;
		area = length * width;
		return area;
	}
	float getPerimeter()const {
		float perimeter;
		perimeter = 2 * (length + width);
		return perimeter;
	}
	
	
};



