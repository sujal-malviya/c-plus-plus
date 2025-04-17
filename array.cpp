#include<iostream>
using namespace std;

int main()
{
    int count = 0;
    int arr[5] ;
    for(int i = 0;i<5;i++)
    {
        cin>>arr[i];
        if(arr[i] == arr[i+1])
        {
            count++;
        }
    }
    if(count>1)
    {
        cout << "true"<< endl;
    }
    else{
        cout << "false" << endl;
    }
    return 0;
}