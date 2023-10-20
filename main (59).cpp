#include <iostream>
#include <string>
using namespace std;

class Employee {
    public:
        string name;
        int year_of_joining;
        double salary;
        string address;
};

int main() {
    Employee employee1;
    employee1.name = "John Doe";
    employee1.year_of_joining = 2010;
    employee1.salary = 50000;
    employee1.address = "123 Street, City A";

    Employee employee2;
    employee2.name = "Jane Smith";
    employee2.year_of_joining = 2015;
    employee2.salary = 60000;
    employee2.address = "456 Avenue, City B";

    Employee employee3;
    employee3.name = "Michael Johnson";
    employee3.year_of_joining = 2018;
    employee3.salary = 70000;
    employee3.address = "789 Road, City C";

    // Printing the information of the three employees
    cout << "Employee 1:" << endl;
    cout << "Name: " << employee1.name << endl;
    cout << "Year of Joining: " << employee1.year_of_joining << endl;
    cout << "Salary: " << employee1.salary << endl;
    cout << "Address: " << employee1.address << endl;

    cout << "\nEmployee 2:" << endl;
    cout << "Name: " << employee2.name << endl;
    cout << "Year of Joining: " << employee2.year_of_joining << endl;
    cout << "Salary: " << employee2.salary << endl;
    cout << "Address: " << employee2.address << endl;

    cout << "\nEmployee 3:" << endl;
    cout << "Name: " << employee3.name << endl;
    cout << "Year of Joining: " << employee3.year_of_joining << endl;
    cout << "Salary: " << employee3.salary << endl;
    cout << "Address: " << employee3.address << endl;

    return 0;
}
