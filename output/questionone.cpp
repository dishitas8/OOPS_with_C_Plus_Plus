#include <iostream>
#include <string>
using namespace std;
class Student
{
    int rollNo;
    string name;
    double cgpa;
public:
    Student(int r, string n)
    {
        rollNo = r;
        name = n;
        cgpa = 0.0;
    }
    Student(int r, string n, double c)
    {
        rollNo = r;
        name = n;
        cgpa = c;
    }
    void updateCGPA(double cgpa)
    {
        this->cgpa = cgpa;
    }
    class Address
    {
        string city;
        string state;
    public:
        Address(string c, string s)
        {
            city = c;
            state = s;
        }
        void displayAddress()
        {
            cout << "City: " << city << endl;
            cout << "State: " << state << endl;
        }
    };
    void display()
    {
        cout << "Roll No: " << rollNo << endl;
        cout << "Name: " << name << endl;
        cout << "CGPA: " << cgpa << endl;
    }
};
int main()
{
    Student s[5] =
    {
        Student(101, "adad", 8.5),
        Student(102, "fdf"),
        Student(103, "gtrg", 9.1),
        Student(104, "fdf"),
        Student(105, "dsd", 8.8)
    };
    s[1].updateCGPA(8.2);
    s[3].updateCGPA(9.0);
    cout << "student details";
    for (int i = 0; i < 5; i++)
    {
        cout << "Student " << i + 1 << endl;
        s[i].display();
        Student::Address addr("Ghaziabad", "Uttar Pradesh");
        addr.displayAddress();
    }
}