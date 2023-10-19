#include<iostream>
using namespace std;
class sam 
{
    public :
    int roll;
   long int phnum;
   string address;
    
};
class john
{
    public :
   int roll;
   long int phnum;
   string address;
};
int main()
{
    sam o1;
    o1.roll = 01;
    o1.phnum = 9826294111;
    o1.address = "ram nagar";
    std::cout <<o1.roll <<"\n" <<o1.phnum <<"\n" << o1.address;
    john o2;
    o2.roll =02;
    o2.phnum =9872511198;
    o2.address = "krishna nagar";
    std::cout <<"\n " << o2.roll <<"\n" << o2.phnum <<"\n" <<o2.address;
    
    return 0;
}