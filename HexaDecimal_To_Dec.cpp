#include <bits/stdc++.h>
#include <conio.h>

using namespace std;

int main()
{
    int sum = 0, rem;
    string num_hex;
    cout << "Enter the hexadecimal number : ";
    cin >> num_hex;
    cout << "The decimal equivalent of " << num_hex << " is : ";
    for (int i = 0; i < num_hex.size(); i++)
    {
        rem = num_hex[i];
        if (rem >= 48 && rem <= 57)
            rem = rem - 48;
        else if (rem >= 65 && rem <= 70)
            rem = rem - 55;
        else if (rem >= 97 && rem <= 102)
            rem = rem - 87;
        else
        {
            cout << "\nInvalid Hex Digit!";
            cout << endl;
            return 0;
        }
        sum += rem * pow(16, (num_hex.size() - 1 - i));
    }
    cout << sum;
    getch();
    return 0;
}