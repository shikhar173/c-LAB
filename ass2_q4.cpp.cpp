#include <iostream>
using namespace std;

class box {
  float length, width, height;
  
  public:
    box() {
        length = 2;
        width = 3;
        height = 2;
    }
    box(float l, float w, float h) {
        length = l;
        width = w;
        height = h;
    }
    
    float volume() {
        return length*width*height;
    }
};
int main()
{
   box b1;
   cout << b1.volume() << endl;
   box b2(3, 4, 6); 
   cout << b2.volume() << endl;
    return 0;
}