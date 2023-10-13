/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
   int i,n,j;
   cout << "enter the value of  n :";
   cin >> n;
   for(i=4;i>=n;i--)
   {
       for(j=1;j<=i;j++)
       {
           cout << "*";
          
       }
        cout << endl;
   }
    return 0;
}
