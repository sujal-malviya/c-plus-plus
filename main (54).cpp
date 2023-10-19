// peri. and area of triangle;
#include<iostream>
using namespace std;
class triangle 
{
    public:
    void perimeter(int a ,int b , int c)
    {
        std::cout << a+b+c << std::endl;
    }
    void area(int h,int b1)
    {
        std::cout << (h+b1)/2 << std::endl; 
    }
};

int main()
{
    triangle t1;
    t1.perimeter(1,2,3);
   
    t1.area(12,10);
    
   
    
    return 0;
}