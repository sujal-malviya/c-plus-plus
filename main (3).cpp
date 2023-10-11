// C++ program to demonstrate function 
// declaration outside class 

#include <bits/stdc++.h> 
using namespace std; 
class Name 
{ 
	public: 
	string firstname; 
	int id; 
	
	// printname is not defined inside class definition 
	void printname(); 
	
	// printid is defined inside class definition 
	void printid() 
	{ 
		cout <<" id is: "<<id; 
	} 
}; 

// Definition of printname using scope resolution operator :: 
void Name::printname() 
{ 
	cout <<"firstname is: "<<firstname; 
} 
int main() { 
	
	Name obj1; 
	obj1.firstname = "xyz"; 
	obj1.id=15; 
	
	// call printname() 
	obj1.printname(); 
	cout << endl; 
	
	// call printid() 
	obj1.printid(); 
	return 0; 
} 
