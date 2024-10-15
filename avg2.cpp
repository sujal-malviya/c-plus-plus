#include <iostream>
using namespace std;
int main()
{
    float a,b,c;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a>>b>>c;
        float avg=(a+b)/2;
        if(avg>c){
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
    }
    return 0;
}