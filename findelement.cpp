#include<bits/stdc++.h>
using namespace std;
int findelement(int key,vector<int> &arr )
{
    int ans = 0;
    for(int i = 0;i<arr.size();i++)
    {
        if(i == key)
        {
            ans = arr[i];
        }
    }
    return ans;
}
int main()
{
    int n,key;
    cin >> n >> key;
    vector<int>arr(n);
    for(int i =0;i<n;i++)
    {
        cin>>arr[i];
    }
    int result = findelement(key,arr);
    cout << result << endl;
    return 0;
}