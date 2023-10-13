/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
   int i,n;
   cout << "enter the value of  n :";
   cin >> n;
   i=1;
   while(i<=n)
   {
       int j = 1;
       while(j<=n)
       {
           cout << "*";
           j++;
       }
       cout << endl;
       i++;
   }
    return 0;
}
