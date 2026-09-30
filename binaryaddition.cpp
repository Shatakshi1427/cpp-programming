#include <iostream>
using namespace std;

class Number
{
private:
    int n;

public:
    Number(int x)
    {
        n = x;
    }

    Number operator+(Number n2)
    {
        Number n3(0);
        n3.n = n + n2.n;
        return n3;
    }

    void display()
    {
        cout << "Number = " << n << endl;
    }
};

int main()
{
    int y;

    cout << "Enter first number: ";
    cin >> y;
    Number n1(y);

    cout << "Enter second number: ";
    cin >> y;
    Number n2(y);

    Number n3 = n1 + n2;

    cout << "After addition: ";
    n3.display();

    return 0;
}
