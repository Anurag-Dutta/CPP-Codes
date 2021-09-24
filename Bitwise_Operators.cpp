#include <bits/stdc++.h>
#include <conio.h>

using namespace std;

int main()
{
    int a, b;
    cout << "Enter the two numbers : ";
    cin >> a >> b;
    string binary_a = bitset<8>(a).to_string();
    string binary_b = bitset<8>(b).to_string();
    cout << "Binary Representation of " << a << " is " << binary_a << endl;
    cout << "Binary Representation of " << b << " is " << binary_b << endl;
    cout << a << " & " << b << " = " << binary_a << " & " << binary_b << " = " << (a & b) << endl;
    cout << a << " | " << b << " = " << binary_a << " | " << binary_b << " = " << (a | b) << endl;
    cout << a << " ^ " << b << " = " << binary_a << " ^ " << binary_b << " = " << (a ^ b) << endl;
    cout << " ~ " << a << " = "
         << " ~ " << binary_a << " = " << (~a) << endl;
    cout << " ~ " << b << " = "
         << " ~ " << binary_b << " = " << (~b) << endl;
    cout << a << " << " << 1 << " = " << binary_a << " << " << 1 << " = " << (a << 1) << endl;
    cout << b << " << " << 1 << " = " << binary_b << " << " << 1 << " = " << (b << 1) << endl;
    cout << a << " >> " << 1 << " = " << binary_a << " >> " << 1 << " = " << (a >> 1) << endl;
    cout << b << " >> " << 1 << " = " << binary_b << " >> " << 1 << " = " << (b >> 1) << endl;
    getch();
    return 0;
}