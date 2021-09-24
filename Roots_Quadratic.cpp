#include <bits/stdc++.h>
#include <conio.h>

using namespace std;

int main()
{
    double a, b, c;
    cout << "For ax^2+bx+c=0, enter the coeffecient of : ";
    cout << "\nx^2 : ";
    cin >> a;
    cout << "\nx^1 : ";
    cin >> b;
    cout << "\nx^0 : ";
    cin >> c;
    double d = (b * b) - 4 * (a * c);
    if (d > 0)
    {
        cout << "\nBoth roots are real and distinct";
        double r1 = ((-b + sqrt(d)) / (2 * a));
        double r2 = ((-b - sqrt(d)) / (2 * a));
        cout << "\nRoot 1 : " << r1 << endl;
        cout << "\nRoot2 : " << r2 << endl;
    }
    else if (d == 0)
    {
        cout << "\nBoth roots are real and identical";
        double r1 = ((-b + sqrt(d)) / (2 * a));
        double r2 = ((-b - sqrt(d)) / (2 * a));
        cout << "\nRoot 1 : " << r1 << endl;
        cout << "\nRoot2 : " << r2 << endl;
    }
    else if (d < 0)
    {
        cout << "\nBoth roots are imaginary";
        cout << "\nRoot 1 : " << (-b / (2 * a)) << " + " << (sqrt(-d)) / (2 * a) << "i" << endl;
        cout << "\nRoot2 : " << (-b / (2 * a)) << " - " << (sqrt(-d)) / (2 * a) << "i" << endl;
    }
    getch();
    return 0;
}