#include<bits/stdc++.h>
using namespace std;
int maxProduct(vector<int> arr)
{
    int n = arr.size();

    int maxProduct = -1e9;

    for (int i = 0; i < n - 2; i++)
        for (int j = i + 1; j < n - 1; j++)
            for (int k = j + 1; k < n; k++)
                maxProduct = max(maxProduct, arr[i] * arr[j] * arr[k]);

    return maxProduct;
}

int main()
{
    vector<int> arr = {10, 3, 5, 6, 20};
    cout << maxProduct(arr) << endl;
}
