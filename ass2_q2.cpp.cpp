#include <iostream>
using namespace std;

class rectangle {
  float length, breadth;
  public:
    rectangle(float l, float b) {
        length = l;
        breadth = b;
    }
    
    float area(){
        return length*breadth;
    }
};
int main()
{
    rectangle r(4, 7);
    cout << r.area() << endl;

    return 0;
}