/*
    AUTHOR: BlueKnight
    CREATED: 2021-08-16 12:09:01
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
};
int main()
{
    int n;
    cout << "\nEnter the number of students: ";
    cin >> n;
    student v[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter Details of Student " << i + 1 << ": " << endl;
        cout << "\nEnter Name: ";
        cin >> v[i].name;
        cout << "\nEnter Roll No: ";
        cin >> v[i].roll;
        cout << "\nEnter the Gender(M/F): ";
        cin >> v[i].gender;
    }
    cout << "\nSTUDENT DETAILS\n";
    for (auto i : v)
    {
        cout << i.name << endl;
        cout << i.roll << endl;
        cout << i.gender << endl;
    }
    getch();
    return 0;
}