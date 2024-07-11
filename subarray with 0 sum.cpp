#include <iostream>
#include <unordered_map>
using namespace std;
void printAllSubarrays(int nums[], int n)
{
    
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
 
        
        for (int j = i; j < n; j++)
        {
           
            sum += nums[j];
 
            
            if (sum == 0) {
                cout << "Subarray [" << i << "…" << j << "]\n";
            }
        }
    }
}
 
int main()
{
    int nums[] = { 3, 4, -7, 3, 1, 3, 1, -4, -2, -2 };
    int n = sizeof(nums)/sizeof(nums[0]);
 
    printAllSubarrays(nums, n);
 
    return 0;
}

