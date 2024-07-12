#include <iostream>
using namespace std; 
void findEquilibriumIndex(int A[], int n)
{
   
    int left[n];
 
    left[0] = 0;
    int right=0;
    
    for (int i = 1; i < n; i++) {
        left[i] = left[i - 1] + A[i - 1];
    }
 
 
    
    for (int i = n - 1; i >= 0; i--)
    {
       
 
        if (left[i] == right) {
            cout<< "Equilibrium Index found at "<<i<<"\n";
        }
 
        
        right += A[i];
    }
}
 
int main(void)
{
    int A[] = { 0, -3, 5, -4, -2, 3, 1, 0 };
    int n = sizeof(A) / sizeof(A[0]);
 
    findEquilibriumIndex(A, n);
 
    return 0;
}