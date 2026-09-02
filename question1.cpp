#include <iostream>
using namespace std;
class Student {
    int rollNumber;
    string name;
    int marks;
    public:
    void details() {
        cout<<"Enter Roll Number: ";
        cin>>rollNumber;
        cout<<"Enter Name: ";
        cin>>name;
        cout<<"Enter marks: ";
        cin>>marks;
    }
    void display() {
        cout<<"Roll Number: "<<rollNumber<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Marks: "<<marks<<endl;
    }
};
int main () {
    Student s;
    s.details();
    s.display();
}