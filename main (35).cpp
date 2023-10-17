#include <iostream> 
using namespace std; 

class B1 { 
public: 
	~B1() { cout << " B1's destructor" << endl; } 
}; 
	
class B2 { 
public: 
	~B2() { cout << " B2's destructor" << endl; } 
}; 
	
class D: public B1, public B2 { 
public: 
	~D() { cout << " D destructor" << endl; } 
}; 
	
int main() 
{ 
D d; 
return 0; 
} 
