// average of number;
#include<iostream>
using namespace std;
class average
{
    public:
    int s1,s2;
    average(int a , int b)
    {
        s1=a;
        s2=b;
    }
    void avg()
    {
        std::cout <<"average is :" << (s1+s2)/2;
    }
    
};

int main()
{
    //call argument using constructor;
   average A(2,3);
   A.avg();
    
    
   
    
    return 0;
}