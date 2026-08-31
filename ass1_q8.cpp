#include <iostream>
using namespace std;

namespace First
{
    int value = 10;

    void display()
    {
        cout << "First Namespace" << endl;
        cout << "Value = " << value << endl;
    }
}

namespace Second
{
    int value = 20;

    void display()
    {
        cout << "Second Namespace" << endl;
        cout << "Value = " << value << endl;
    }
}

int main()
{
    First::display();
    Second::display();

    cout << "First Value = " << First::value << endl;
    cout << "Second Value = " << Second::value << endl;

    return 0;
}
