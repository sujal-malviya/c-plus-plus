/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    char ch;
    cout << " enter the value :";
    cin >> ch;
    if(ch>=97 && ch<=122 )
    {
        cout << "lowercase";
    }
    else if(ch>=65 && ch<=90)
    {
        cout << "upper case";
    }
    else if(ch>='0' && ch<='9')
    {
        cout << " number";
    }
    else
    {
        cout << "symbol";
    }
    return 0;
}
