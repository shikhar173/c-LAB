#include <iostream>
using namespace std;

class student {
  string name;
  int rollno;
  
  public:
    student() {
        name = "Shikhar";
        rollno = 109;
    }
    void display();
  
};

void student :: display(){
    cout << "Student name is " << name <<endl;
    cout << "Roll number is " << rollno <<endl;
}

int main()
{
    student s1;
    s1.display();

    return 0;
}