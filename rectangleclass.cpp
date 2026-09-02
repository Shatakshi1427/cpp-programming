#include <iostream>

using namespace std;

class Rectangle {
private:
    double length;
    double breadth;

public:
    Rectangle() {
        length = 0.0;
        breadth = 0.0;
    }
    Rectangle(double l, double b) {
        length = l;
        breadth = b;
    }

    
    Rectangle(const Rectangle &rect) {
        length = rect.length;
        breadth = rect.breadth;
    }
    double calculateArea() {
        return length * breadth;
    }

    
    void display() {
        cout << "Length: " << length << ", Breadth: " << breadth 
             << " -> Area: " << calculateArea() << endl;
    }
};

int main() {

    Rectangle rect1;             
    Rectangle rect2(8.5, 4.0);   
    Rectangle rect3 = rect2;     

    cout << "Rectangle 1 (Default Constructor):" << endl;
    rect1.display();

    cout << "\nRectangle 2 (Parameterized Constructor):" << endl;
    rect2.display();

    cout << "\nRectangle 3 (Copy Constructor):" << endl;
    rect3.display();

    return 0;
}
