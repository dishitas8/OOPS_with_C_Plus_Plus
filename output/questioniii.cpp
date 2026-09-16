#include <iostream>
#include <string>
using namespace std;
class Patient {
    int patientId;
    string patientName;
    static int activePatients;
public:
    Patient(int id, string name) : patientId(id), patientName(name) {
        activePatients++;
    }
    ~Patient() {
        activePatients--;
    }
    static void showActivePatients() {
        cout << "Number of active patients: " << activePatients << endl;
    }
};
int Patient::activePatients = 0;
int main() {
    {
        Patient p1(1, "Alice");
        Patient p2(2, "Bob");
        Patient p3(3, "Charlie");
        Patient::showActivePatients();
    }
    Patient::showActivePatients();
}