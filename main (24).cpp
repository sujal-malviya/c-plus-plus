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
      a=10;
  }
  ~abc()
  {
      a=10;
  }
};

int main()
{
    abc o1;
    cout << o1.a<< endl;

    return 0;
}
