/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
class sujal
{
  public:
  int a;
  sujal()
  {
      // default constructor;
      cout << "default constructor :" << endl;
      a = -1;
  }
  sujal (int x)
  {
      //paramaterised constructor;
      cout << "paramaterised constructor :" << endl;
      a=x;
  }
};

int main()
{
    sujal o1;
    cout << o1.a << endl;
    sujal o2(10);
    cout << o2.a << endl;

    return 0;
}
