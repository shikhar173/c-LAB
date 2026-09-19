#include <iostream>
using namespace std;

class Complex
{
    int real;
    int imag;

public:

  
    Complex()
    {
        real = 0;
        imag = 0;
    }

    
    Complex(int r, int i)
    {
        real = r;
        imag = i;
    }

    
    void display()
    {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main()
{
    Complex c1;          
    Complex c2(5, 3);    

    cout << "First complex number: ";
    c1.display();

    cout << "Second complex number: ";
    c2.display();

    return 0;
}