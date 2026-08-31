#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
    string name;
    int rollNo;
    string degree;
    string hostel;
    float currentCGPA;


    void updateName()
    {
        cout << "Enter new Name: ";
        cin >> name;
    }

public:
    void addDetails()
    {
        cout << "Enter Name: ";
        cin >> name;

        cout << "Enter Roll No: ";
        cin >> rollNo;

        cout << "Enter Degree: ";
        cin >> degree;

        cout << "Enter Hostel: ";
        cin >> hostel;

        cout << "Enter Current CGPA: ";
        cin >> currentCGPA;
    }

    void updateDetails()
    {

        updateName();

        cout << "Enter new Degree: ";
        cin >> degree;
    }

    void updateCGPA()
    {
        cout << "Enter new CGPA: ";
        cin >> currentCGPA;
    }

    void updateHostel()
    {
        cout << "Enter new Hostel: ";
        cin >> hostel;
    }

    void displayDetails()
    {
        cout << "\n----- Student Details -----" << endl;
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "Degree: " << degree << endl;
        cout << "Hostel: " << hostel << endl;
        cout << "Current CGPA: " << currentCGPA << endl;
    }
};

int main()
{
    Student s;

    s.addDetails();

    cout << "\nStudent Details:";
    s.displayDetails();

    s.updateDetails();
    s.updateCGPA();
    s.updateHostel();

    cout << "\nUpdated Details:";
    s.displayDetails();

    return 0;
}
