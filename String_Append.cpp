#include <bits/stdc++.h>
#include <conio.h>

using namespace std;
int main()
{
    string s1, s2, res;
    cout << "Enter the first String : ";
    getline(cin, s1);
    cout << "\nEnter the second String : ";
    getline(cin, s2);
    res = s1.append(s2);
    cout << res;
    getch();
    return 0;
}