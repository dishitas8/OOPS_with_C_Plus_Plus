#include <iostream>
#include <string>
using namespace std;

class ResultAnalyzer;

class StudentResult
{
private:
    int rollNo;
    string name;
    int marks1, marks2, marks3;

    static int totalStudents;

public:
    // Parameterized constructor
    StudentResult(int r, string n, int m1, int m2, int m3)
    {
        rollNo = r;
        name = n;
        marks1 = m1;
        marks2 = m2;
        marks3 = m3;

        totalStudents++;
    }

    // Friend class
    friend class ResultAnalyzer;

    // Static function
    static void displayTotalStudents()
    {
        cout << "Total Students: " << totalStudents << endl;
    }

    // Destructor
    ~StudentResult()
    {
        cout << "StudentResult object destroyed for Roll No: "
             << rollNo << endl;
    }
};

// Definition of static data member
int StudentResult::totalStudents = 0;

class ResultAnalyzer
{
public:
    void analyze(StudentResult &s)
    {
        int total = s.marks1 + s.marks2 + s.marks3;
        double percentage = total / 3.0;

        cout << "Roll No: " << s.rollNo << endl;
        cout << "Name: " << s.name << endl;
        cout << "Total Marks: " << total << endl;
        cout << "Percentage: " << percentage << "%" << endl;

        if (s.marks1 >= 33 && s.marks2 >= 33 && s.marks3 >= 33)
            cout << "Result: PASS" << endl;
        else
            cout << "Result: FAIL" << endl;
    }
};

int main()
{
    StudentResult s1(101, "Dishita", 85, 90, 88);
    StudentResult s2(102, "Rahul", 30, 45, 50);

    ResultAnalyzer analyzer;

    cout << "Student 1 Result:" << endl;
    analyzer.analyze(s1);

    cout << "\nStudent 2 Result:" << endl;
    analyzer.analyze(s2);

    cout << endl;
    StudentResult::displayTotalStudents();

    return 0;
}