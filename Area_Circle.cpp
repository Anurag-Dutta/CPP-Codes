/*
    AUTHOR: BlueKnight
    CREATED: 2021-09-01 23:52:16
*/
#include <bits/stdc++.h>
#include <conio.h>

using namespace std;

int main()
{
    double radius;
    cout << "Enter the radius of the circle: ";
    cin >> radius;
    double area = (3.1415926535897932384626433832795) * (radius) * (radius);
    cout << "\nArea of the Circle: " << area << endl;
    getch();
    return 0;
}