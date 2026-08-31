#include <iostream>
using namespace std;

class employee {
  string name;
  int id;
  float salary;
  public:
  employee(string n, int i, float s) {
      name = n;
      id = i;
      salary = s;
  }
  void display() {
      cout << "Employee name is " << name << endl;
      cout << "Employee id is " << id << endl;
      cout << "Employee salary is " << salary << endl;
  }
};
int main()
{
    employee e1("rahul", 101, 50000);
    e1.display();

    return 0;
}