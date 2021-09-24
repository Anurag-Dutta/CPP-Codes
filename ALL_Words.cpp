#include <bits/stdc++.h>
#include <conio.h>

using namespace std;
int main()
{
    string s;
    cout << "Enter the string : ";
    getline(cin, s);
    stringstream str(s);
    string word;
    cout << "\nThe words present in the sentence are : ";
    while (str >> word)
    {
        cout << word << endl;
    }
    getch();
    return 0;
}
