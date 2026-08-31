#include <iostream>
using namespace std;

class Demo
{
private:

    void privateFunction()
    {
        cout << "Private function is called." << endl;
    }

public:

    void publicFunction()
    {
        cout << "Public function is called." << endl;


        privateFunction();
    }
};

int main()
{
    Demo obj;

    obj.publicFunction();

    return 0;
}
