#include <iostream>
#include <string>
using namespace std;

class Employee
{
private:
    int employeeId;
    string name;
    double salary;

public:
    // Default constructor
    Employee()
    {
        employeeId = 0;
        name = "Unknown";
        salary = 0;
    }

    // Parameterized constructor
    Employee(int id, string n, double s)
    {
        employeeId = id;
        name = n;
        salary = s;
    }

    // Copy constructor
    Employee(const Employee &e)
    {
        employeeId = e.employeeId;
        name = e.name;
        salary = e.salary;
    }

    // Const member function
    void display() const
    {
        cout << "Employee ID: " << employeeId << endl;
        cout << "Name: " << name << endl;
        cout << "Salary: " << salary << endl;
    }

    // Salary update function
    void updateSalary(double newSalary)
    {
        salary = newSalary;
    }
};

int main()
{
    const Employee e1(101, "Dishita", 50000);

    cout << "Const Employee Object:" << endl;
    e1.display();

    // e1.updateSalary(60000);   // Error: cannot call non-const function using const object

    Employee e2(e1);

    cout << "\nCopied Employee Object:" << endl;
    e2.display();

    e2.updateSalary(60000);

    cout << "\nAfter Salary Update:" << endl;
    e2.display();

    return 0;
}