//Function Overloading;
#include <iostream>
using namespace std;
void Add(int num1, int num2)
{
    int sum = num1 + num2;
    cout << "The Result is " << sum << endl;
}
void Add(int num1, int num2, int num3)
{
    int sum = num1 + num2 + num3;
    cout << "The Result is " << sum << endl;
}
void Add(double num1, double num2)
{
    double sum = num1 + num2;
    cout << "The Result is " << sum << endl;
}
int main()
{
    Add (5, 10);
    Add (5, 10, 15);
    Add (5.5, 10.7);
    return 0;
}