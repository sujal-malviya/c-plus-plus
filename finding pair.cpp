#include <iostream>
using namespace std;
void findPair(int nums[], int n, int target)
{
    
    for (int i = 0; i < n - 1; i++)
    {
       
        for (int j = i + 1; j < n; j++)
        {
          
            if (nums[i] + nums[j] == target)
            {
                cout<<"Pair found \n" << nums[i] <<" " << nums[j];
                return;
            }
        }
    }
 
    
    printf("Pair not found");
}
 
int main(void)
{
    int nums[] = { 8, 7, 2, 5, 3, 1 };
    int target = 10;
 
    int n = sizeof(nums)/sizeof(nums[0]);
 
    findPair(nums, n, target);
 
    return 0;
}