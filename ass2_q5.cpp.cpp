#include <iostream>
using namespace std;

class student {
    string name;
    int rollno;
    float CGPA;
    
    public:
    student(){
        name = "Unknown";
        rollno = 0;
        CGPA = 0.0;
    }
    student(string n, int r){
        name = n;
        rollno = r;
        CGPA = 0.0;
    }
    student(string n, int r, float c){
        name = n;
        rollno = r;
        CGPA = c;
    }
    
    void display(){
        cout << "Name: " << name <<endl;
        cout << "Roll number: " << rollno << endl;
        cout << "CGPA: " << CGPA << endl;
    }
};
int main()
{
   student s1;
   student s2("aman", 1);
   student s3("rahul", 2, 8.9);
   s1.display();
   s2.display();
   s3.display();
    return 0;
}