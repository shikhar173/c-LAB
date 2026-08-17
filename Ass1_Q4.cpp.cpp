#include <iostream>
using namespace std;
struct student {
    string name;
    int rollNo;
    string degree;
    string hostel;
    float cgpa;
    
    void addDetails()
    {
        cout << "Enter name: ";
        cin >> name;
        
        cout << "\nEnter rollNo: ";
        cin >> rollNo;
        
        cout << "\nEnter degree: ";
        cin >> degree;
        
        cout << "\nEnter hostel: ";
        cin >> hostel;
        
        cout << "\nEnter cgpa: ";
        cin >> cgpa;
    }
    void updateDetail()
    {
        cout << "\nEnter new name: ";
        cin >> name;
        
        cout << "\nEnter new rollNo: ";
        cin >> rollNo;
        
        cout << "\nEnter new degree: ";
        cin >> degree;
    }
    void updateCGPA()
    {
         cout << "\nEnter new cgpa: ";
        cin >> cgpa;
    }
    void updateHostel()
    {
         cout << "\nEnter new hostel: ";
        cin >> hostel;
    }
    void displayDetail()
    {
        cout << "\n----------STUDENT DETAILS----------";
        cout << "\nStudent name: " << name;
        cout << "\nStudent rollNo: " << rollNo;
        cout << "\nStudent degree: " << degree;
        cout << "\nStudent hostel: " << hostel;
        cout << "\nStudent cgpa: " << cgpa;
    }
};
int main() {
   student s;
   cout<<"Add student details."<<endl;
   s.addDetails();
   
   s.displayDetail();
   
   s.updateDetail();
   s.updateHostel();
   s.updateCGPA();
   
   cout<<"\nUpdated Details :"<<endl;
   s.displayDetail();
    
    return 0;
}