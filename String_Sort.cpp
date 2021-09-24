#include <bits/stdc++.h>
#include <conio.h>

using namespace std;
int main()
{
    string s;
    cout << "Enter the string : ";
    cin >> s;
    sort(s.begin(), s.end(), greater<int>()); //greater<int>() is used to sort array in decreasing order.
    cout << s << endl;
    getch();
    return 0;
}