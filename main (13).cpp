/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
   int n,i;
   cout << " the value of n is :";
   cin >> n;
   i = 1;
   int fact = 1;
   do
   {
       
        cout << i << "\n";
        fact = fact * i;
      
       i++;
   }while(i<=n);
   cout << fact <<"\n";
    return 0;
}
