#include <iostream>
using namespace std;
int sort(int A[], int n)
{
   
    int zeros = 0;
    for (int i = 0; i < n; i++)
    {
        if (A[i] == 0) {
            zeros++;
        }
    }
 
    
    int k = 0;
    while (zeros--) {
        A[k++] = 0;
    }
 
        
    while (k < n) {
        A[k++] = 1;
    }
    
}
 
int main(void)
{
    int A[] = { 0, 0, 1, 0, 1, 1, 0, 1, 0, 0 };
    int n = sizeof(A)/sizeof(A[0]);
 
    sort(A, n);
 

    for (int i = 0; i < n; i++) {
        cout << " "<< A[i];
    }
 
    return 0;
}