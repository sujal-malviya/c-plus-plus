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
   for(i=0;i<=n;i++)
   {
       if (i%2==0)
       {
           cout << "ram" <<"\n";
       }
       else if (i%2!=0)
       {
           cout << "sita" << "\n";
       }
       else 
       {
           cout << "lakhsman" << "\n";
       }
       
   }
    return 0;
}
