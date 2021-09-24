/*
    AUTHOR: BlueKnight
    CREATED: 2021-08-16 13:14:25
*/
#include <bits/stdc++.h>
#include <conio.h>

using namespace std;
class student
{
public:
    string name;
    long long roll;
    char gender;
    student()
    {
        cout << "\nDefaultzzz\n";
    }
    student(string n, long long r, char g)
    {
        cout << "\nParametric Constructor Called\n";
        name = n;
        roll = r;
        gender = g;
    }
    student(student &object)
    {
        cout << "\nCopy Constructor Called\n";
        name = object.name;
        roll = object.roll;
        gender = object.gender;
    }
    ~student()
    {
        cout << "\nDestructor Called\n";
    }
    void print()
    {
        cout << "NAME: " << name << endl;
        cout << "ROLL NUMBER: " << roll << endl;
        cout << "GENDER: " << gender << endl;
    }
};
int main()
{
    string name;
    cout << "\nEnter the Name: ";
    cin >> name;
    long long roll;
    cout << "\nEnter the Roll Number: ";
    cin >> roll;
    char gender;
    cout << "\nEnter the Gender: ";
    cin >> gender;
    student s1(name, roll, gender); // Parametric Constructor
    s1.print();
    student s2; // Default Constructor
    s2.print();
    student s3 = s1; // Copy Constructor
    s3.print();
    getch();
    return 0;
}