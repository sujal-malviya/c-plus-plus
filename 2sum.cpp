#include<iostream>
using namespace std;
bool Sum2(int arr[],int target)
{
    int n = sizeof(arr);
    for(int i = 0;i<n;i++)
    {
        for(int j = i+1;j<n;j++)
        {
            if(arr[i]+arr[j] == target)
            {
                return true;
            }
        }
    }
    return false;
}
int main()
{
    int n,target;
    cin >> n >> target;
    int arr[n];
    for(int i = 0;i<n;i++)
    {
        cin >> arr[i];
    }
    bool result = Sum2(arr, target);
    if(result)
    {
        cout << "True" << endl;
    }
    else{
        cout << "False" << endl;
    }

}