#include <iostream>
using namespace std;

class Shape
{
public:
    virtual void area()
    {
        cout << "Area of shape" << endl;
    }
};

class Circle : public Shape
{
private:
    float radius;

public:
    void getdata()
    {
        cout << "Enter radius of circle ==> ";
        cin >> radius;
    }

    void area()
    {
        cout << "Area of circle is ==> "
             << 3.14 * radius * radius << endl;
    }
};

class Rectangle : public Shape
{
private:
    float length, width;

public:
    void getdata()
    {
        cout << "Enter the value of length ==> ";
        cin >> length;

        cout << "Enter the value of width ==> ";
        cin >> width;
    }

    void area()
    {
        cout << "Area of rectangle is ==> "
             << length * width << endl;
    }
};

class Square : public Shape
{
private:
    float side;

public:
    void getdata()
    {
        cout << "Enter the value for side ==> ";
        cin >> side;
    }

    void area()
    {
        cout << "Area of square is ==> "
             << side * side<< endl;
    }
};

int main()
{
    Circle c;
    Rectangle r;
    Square s;

    c.getdata();
    r.getdata();
    s.getdata();

    cout<<"----The result is----"<<endl;
    c.area();
    r.area();
    s.area();

    return 0;
}