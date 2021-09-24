/*
    AUTHOR: BlueKnight
    CREATED: 2021-09-02 00:10:53
*/
#include <bits/stdc++.h>
#include <conio.h>

using namespace std;

int main()
{
    double ph, che, math, eng, bio, total, percentage;
    cout << "Enter marks in Physics: ";
    cin >> ph;
    cout << "\nEnter marks in Chemistry: ";
    cin >> che;
    cout << "\nEnter marks in Mathematics: ";
    cin >> math;
    cout << "\nEnter marks in English: ";
    cin >> eng;
    cout << "\nEnter marks in Biology: ";
    cin >> bio;
    total = ph + che + math + eng + bio;
    percentage = total * 0.2;
    cout << "\nPercentage: " << percentage << endl;
    if (percentage >= 90)
    {
        cout << "GRADE: A" << endl;
    }
    else if (percentage >= 80 && percentage < 90)
    {
        cout << "GRADE: B" << endl;
    }
    else if (percentage >= 70 && percentage < 80)
    {
        cout << "GRADE: C" << endl;
    }
    else
    {
        cout << "GRADE: D" << endl;
    }
    getch();
    return 0;
}
