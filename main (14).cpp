/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
   //check wheather the number is prime or not;
   int i,n;
   cout << "enter the value of  n :";
   cin >> n;
   i=2;
   while(i<n)
   {
       if(n%i==0)
       {
           cout << "prime for " << i << endl;
       }
       else
       {
           cout << "not prime for " << i << endl;
       }
       i++;
   }
    return 0;
}
