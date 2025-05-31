#include<bits/stdc++.h>
using namespace std;
int missing_arr(vector<int>&arr)
{
    int n = arr.size()+1;
    int xor1 = 0, xor2 = 0;
    for(int i = 0;i<n-1;i++)
    {
        xor2 ^= arr[i];
    }
    for(int i = 1;i<=n;i++)
    {
        xor1 ^= i;
    }
    return xor1 ^ xor2;
}
int main()
{
    int n ;
    cin >> n;
    vector<int>arr(n);
    for(int i = 0;i<n;i++)
    {
        cin >> arr[i];
    }
    int result = missing_arr(arr);
    cout << result << endl;
    
    return 0;
}