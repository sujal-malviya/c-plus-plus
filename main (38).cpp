//polymorfism;

#include <iostream>

using namespace std;
class data
{
    public:
  void fun(int x)
  {
      std::cout << "\nvalue of x is :" << x;
  }
  void fun(double x)
  {
      std::cout << "\nvalue of x is :" <<x;
  }
  void fun(int x, int y)
  {
      std::cout <<"\nvalue of x :" << x << " & y is :" <<y;
  }
};

int main()
{
    data o1;
    o1.fun(8);
    o1.fun(7.91);
    o1.fun(7,9);
    cout<<"\nHello World";

    return 0;
}
