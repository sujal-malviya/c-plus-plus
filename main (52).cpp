// C++ program to demonstrate how we will calculate
// the area of shapes USING VIRTUAL FUNCTION
#include <fstream>
#include <iostream>
using namespace std;


class Shape {
public:
	
	virtual void calculate()
	{
		cout << "Area of your Shape ";
	}
	
	virtual ~Shape()
	{
		cout << "Shape Destuctor Call\n";
	}
};


class Rectangle : public Shape {
public:
	int width, height, area;

	void calculate()
	{
		cout << "Enter Width of Rectangle: ";
		cin >> width;

		cout << "Enter Height of Rectangle: ";
		cin >> height;

		area = height * width;
		cout << "Area of Rectangle: " << area << "\n";
	}

	
	virtual ~Rectangle()
	{
		cout << "Rectangle Destuctor Call\n";
	}
};


class Square : public Shape {
public:
	int side, area;

	void calculate()
	{
		cout << "Enter one side your of Square: ";
		cin >> side;

		area = side * side;
		cout << "Area of Square: " << area << "\n";
	}


	virtual ~Square()
	{
		cout << "Square Destuctor Call\n";
	}
};

int main()
{

	
	Shape* S;
	Rectangle r;


	S = &r;

	
	S->calculate();
	Square sq;

	
	S = &sq;


	S->calculate();


	return 0;
}
