#include <iostream>
using namespace std;

class Complex {
public:
    int real;
    int imag;
    void add(Complex c1, Complex c2) {
        real = c1.real + c2.real;
        imag = c1.imag + c2.imag;
    }
    void subtract(Complex c1, Complex c2) {
        real = c1.real - c2.real;
        imag = c1.imag - c2.imag;
    }
    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    Complex c1, c2, sum, sub;
    cout << "Enter real and imaginary part for c1: ";
    cin >> c1.real >> c1.imag;

    cout << "Enter real and imaginary part for c2: ";
    cin >> c2.real >> c2.imag;
    sum.add(c1, c2);
    sub.subtract(c1, c2);
    cout << "\nAddition: ";
    sum.display();
    cout << "Subtraction: ";
    sub.display();

    return 0;
}

