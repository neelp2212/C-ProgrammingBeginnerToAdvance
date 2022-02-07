#include <iostream>
using namespace std;
int main()
{

// Exe - 1
    float radius;
    float area;
    cout << "Enrer Radius of a Circle";
    cin >> radius;
    area = 3.1425 * radius * radius;
    cout << "Area of a Circle is " << area << endl;

// Exe - 2
    float basic;
    float percentAllow;
    float percentDeduct;
    float netSalary;
    cout << "Enter Basic Salary:";
    cin >> basic;
    cout << "Enter percent of Allowences:";
    cin >> percentAllow;
    cout << "Enter percent of Deductions:";
    cin >> percentDeduct;
    netSalary = basic + basic * percentAllow / 100 - basic * percentDeduct / 100;
    cout << "Net Salary is:" << netSalary << endl;
}