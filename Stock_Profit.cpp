#include <bits/stdc++.h>
#include <conio.h>

using namespace std;

int main()
{
    int size;
    cout << "Enter the number of investors : ";
    cin >> size;
    string name[size];
    int investment[size];
    int total_investment = 0;
    int profit[size];
    for (int i = 0; i < size; i++)
    {
        cout << "\nEnter the details of the investor " << i + 1 << " : ";
        cout << "\n\nEnter Name : ";
        cin >> name[i];
        cout << "Enter the invested amount : ";
        cin >> investment[i];
        total_investment += investment[i];
        cout << endl;
    }
    cout << endl;
    for (int i = 0; i < size; i++)
    {
        profit[i] = (investment[i] * 10000) / total_investment;
    }
    for (int i = 0; i < size; i++)
    {
        cout << name[i] << "\t\t     " << investment[i] << "\t\t     " << profit[i] << endl;
    }
    getch();
    return 0;
}