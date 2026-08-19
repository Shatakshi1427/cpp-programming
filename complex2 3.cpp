#include <iostream>
using namespace std;

class Complex
{
    int real, imag;

public:
    void getData()
    {
        cout << "Enter real part: ";
        cin >> real;

        cout << "Enter imaginary part: ";
        cin >> imag;
    }

    void add(Complex c1, Complex c2)
    {
        real = c1.real + c2.real;
        imag = c1.imag + c2.imag;
    }

    void display()
    {
        cout << real << " + " << imag << "i";
    }
};

int main()
{
    Complex c1, c2, c3;

    cout << "Enter first complex number:\n";
    c1.getData();

    cout << "\nEnter second complex number:\n";
    c2.getData();

    c3.add(c1, c2);

    cout << "\nSum of complex numbers = ";
    c3.display();

    return 0;
}
