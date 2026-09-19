#include <iostream>
using namespace std;

class Demo
{
public:

    Demo()
    {
        cout << "Constructor called" << endl;
    }

    ~Demo()
    {
        cout << "Destructor called" << endl;
    }
};

void test()
{
    cout << "Inside function" << endl;

    Demo b;

    cout << "Leaving function" << endl;
}

int main()
{
    cout << "Inside main" << endl;

    Demo a;

    test();

    cout << "Back in main" << endl;

    return 0;
}