#include<iostream>
using namespace std;

class student
{
protected:
    string name;
    int roll_no;

public:
    void getstudents()
    {
        cout << "Enter name : ";
        cin >> name;

        cout << "Enter roll no. : ";
        cin >> roll_no;
    }
};

class studentexam : public student
{
protected:
    int m[5];

public:
    void getmarks()
    {
        for(int i = 0; i < 5; i++)
        {
            cout << "Subject " << i + 1 << " mark is : ";
            cin >> m[i];
        }
    }
};

class studentresult : public studentexam
{
public:
    void displayresult()
    {
        int total = 0;

        for(int i = 0; i < 5; i++)
        {
            total = total + m[i];
        }

        float percentage = total / 5.0;

        cout << "\nStudent name : " << name << endl;
        cout << "Student roll no. : " << roll_no << endl;
        cout << "Total marks : " << total << endl;
        cout << "Percentage : " << percentage << "%" << endl;
    }
};

int main()
{
    studentresult s;

    s.getstudents();
    s.getmarks();
    s.displayresult();

    return 0;
}
