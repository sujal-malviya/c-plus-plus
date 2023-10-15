/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
class abc//parent class;
{ 
    int a,b;
    public :
  abc()
  {
      
      cout << " default constructor" << endl;
  }
  abc(int a, int b)
  {
      cout << "parameterised constructor" << "\n" << a  << "\n"<< b << "\n" <<endl;
  }
};
class abc1 : public abc //child class
{
  public :
  abc1()
  {

  }
};
int main()
{
    abc o5;//called  abc  def.. constructor;
    abc(10,20);//called para.. constructor
    return 0;
}
