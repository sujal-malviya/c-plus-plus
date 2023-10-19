// peri. and area of   2 rectangle;
#include<iostream>
using namespace std;
class rectangle1
{
    public:
    int s1,s2;
    rectangle1(int a, int b)
    {
        s1=a;
        s2=b;
    }
    void area()
    {
        int d = s1*s2;
        std::cout << d << std::endl;
        std::cout<<"perimeter is :" <<2*(s1+s2) ;
    }
};
class rectangle2 
{
  public:
  int c, e;
  rectangle2(int g,int f)
  {
      c=g;
      e=f;
  }
  void area1(){
      int k = c*e;
      std::cout<<"\n"<<k;
      std::cout<<"\nperi.. is :" <<2*(c+e);
  }
};
int main()
{
    //call argument using constructor;
   rectangle1 t(3,4);
   t.area();
   rectangle2 o(5,4);
   o.area1();
    
    
   
    
    return 0;
}