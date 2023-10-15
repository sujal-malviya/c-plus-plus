/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
class abc
{ 
    public:
    int a,b,c;
    string a1,b1,c1;
    
};

int main()
{
    abc o5;
    o5.a=1;
    o5.b=2;
    o5.c=3;
    o5.a1 ="ram \n";
    o5.b1 ="lakshman \n";
    o5.c1 ="hanuman \n";
    cout << o5.a << o5.b <<o5.c <<endl;
    cout << o5.a1 << o5.b1 << o5.c1 << endl;
    return 0;
}
