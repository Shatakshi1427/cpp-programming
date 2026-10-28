#include <iostream>
using namespace std;

class Employee
{
public:
    // Calculate salary using Basic Salary only
    float calculateSalary(float basic)
    {
        return basic;
    }

    // Calculate salary using Basic Salary and HRA
    float calculateSalary(float basic, float hra)
    {
        return basic + hra;
    }

    // Calculate salary using Basic Salary, HRA and DA
    float calculateSalary(float basic, float hra, float da)
    {
        return basic + hra + da;
    }
};

int main()
{
    Employee emp;

    float basic, hra, da;

    cout << "Enter Basic Salary: ";
    cin >> basic;

    cout << "Enter HRA: ";
    cin >> hra;

    cout << "Enter DA: ";
    cin >> da;

    cout << "\nSalary using Basic Salary only: "
         << emp.calculateSalary(basic);

    cout << "\nSalary using Basic Salary + HRA: "
         << emp.calculateSalary(basic, hra);

    cout << "\nSalary using Basic Salary + HRA + DA: "
         << emp.calculateSalary(basic, hra, da);

    return 0;
}
