#include <iostream>
using namespace std;

class Fraction {
public:
    int num;  
    int den; 

    void add(Fraction f1, Fraction f2) {
        num = (f1.num * f2.den) + (f2.num * f1.den);
        den = f1.den * f2.den;
    }

    void subtract(Fraction f1, Fraction f2) {
        num = (f1.num * f2.den) - (f2.num * f1.den);
        den = f1.den * f2.den;
    }

    void display() {
        cout << num << "/" << den << endl;
    }
};

int main() {
    Fraction f1, f2, sum, sub;
    cout << "Enter numerator and denominator for Fraction 1: ";
    cin >> f1.num >> f1.den;
    cout << "Enter numerator and denominator for Fraction 2: ";
    cin >> f2.num >> f2.den;
    sum.add(f1, f2);
    sub.subtract(f1, f2);
    cout << "\nAddition: ";
    sum.display();

    cout << "Subtraction: ";
    sub.display();

    return 0;
}

