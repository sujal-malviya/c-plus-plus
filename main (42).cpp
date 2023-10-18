//virtual Function
#include <iostream>
using namespace std;
class shape
{
    public:
  void prnt()
  {
      std::cout << "\nthis is shape " ;
  }
};
class polygon:public shape
{
    public:
    void prnt()
    {
        std::cout << "\nthis is a polygon";
    }
};
class rectangle:public shape
{
    public:
    void prnt()
    {
        std::cout << "\nrectangle is polygon";
    }
};
class square:public shape
{
    public:
    void prnt()
    {
        std::cout <<"\nsquare is a polygon";
    }
    
};
class triangle:public shape
{
    public:
    void prnt(){
        std::cout << "\ntriangle is a polygon";
    }
};
int main()
{
    shape o2;
    o2.prnt();
    polygon o1;
    o1.prnt();
    rectangle o3;
    o3.prnt();
    triangle o4;
    o4.prnt();
    square o5;
    o5.prnt();
    return 0;
}