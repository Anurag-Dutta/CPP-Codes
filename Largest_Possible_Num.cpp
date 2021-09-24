#include <bits/stdc++.h>
#include <conio.h>

using namespace std;
int main()
{
    string s;
    cout << "Enter the string : ";
    getline(cin, s);
    sort(s.end(),s.begin());
    cout << s << endl;
    getch();
    return 0;
}