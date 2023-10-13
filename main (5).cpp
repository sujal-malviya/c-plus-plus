/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    cin >> a;
    cout << "enter the  value of a :" << a <<endl;
    cin >> b;
    cout << "enter the value of b :" << b <<endl;
    cin >> c;
    cout << "enter the value of c :" << c <<endl;
    if(a>b)
    {
        cout << "a is bigger";
    }
    else if(b>a && b>c)
    {
        cout << "b is bigger";
    }
    else
    {
        cout << "c is bigger";    }

    return 0;
}
