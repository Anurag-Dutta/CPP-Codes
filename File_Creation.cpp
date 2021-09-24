/*
    AUTHOR: BlueKnight
    CREATED: 2021-09-21 00:46:14
*/
#include <bits/stdc++.h>
#include <conio.h>

using namespace std;

int main()
{

    fstream file;
    file.open("File.txt", ios::out);
    if (!file)
    {
        cout << "Error in creating file!!!";
        return 0;
    }
    cout << "File created successfully.";
    file.close();
    getch();
    return 0;
}
