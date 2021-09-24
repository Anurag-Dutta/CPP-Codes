#include <bits/stdc++.h>
#include <conio.h>

using namespace std;

int main()
{
    char ch;
    cout << "Enter the character : ";
    cin >> ch;
    if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' || ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
    {
        cout << "\n"
             << ch << " is a Vowel";
    }
    else
    {
        cout << "\n"
             << ch << " is a Consonant";
    }
    getch();
    return 0;
}
