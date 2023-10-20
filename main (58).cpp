//volume of box;
#include <iostream>
using namespace std;

class volume
{
private:
    int l;
    int b;
    int h;
public:
    volume(int lenght,int breadth ,int hieght)
    {
        
        l=lenght;
        b=breadth;
        h=hieght;
    }
    void volume1()
    {
        std::cout<< "volume of box is :" << l*b*h;
    }
    
};

int main()
{
    volume v(3,4,5);
    v.volume1();
    return 0;
}                 