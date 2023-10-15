/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
class abc
{
    public :
    int a;
  abc()//constructor;
  {
      cout << "constructor "<<endl;
      a=10;
  }
  ~abc()
  {
      a=10;
  }
  abc(const abc&o4)
  {
      cout << "copy constructor" <<endl;
  }
};

int main()
{
    abc o1;
    abc o2(o1);
    cout << o1.a<< endl;

    return 0;
}
