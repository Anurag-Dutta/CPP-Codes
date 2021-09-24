/*
Problem : (Amazon,Oracle)
Given an array arr[] of size N. The task is to find the first repeating element in an
array of integers, i.e., an element that occurs more than once and whose index of
first occurrence is smallest.

Example : 
    Input:
    7
    1 5 3 4 3 5 6
    Output:
    2
*/
#include <bits/stdc++.h>
#include <conio.h>

using namespace std;

int main()
{
    int size, repeat;
    cout << "Enter the size of the array : ";
    cin >> size;
    cout << endl;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cout << "\nEnter element " << i + 1 << " : ";
        cin >> arr[i];
    }
    for (int i = 0; i < size; i++)
    {
        repeat = arr[i];
        int j;
        for (j = 0; j < size; j++)
        {
            if (j == i)
            {
                continue;
            }
            else
            {
                if (arr[j] == repeat)
                {
                    cout << "\n"
                         << i + 1 << endl;
                    break;
                }
                else
                {
                    continue;
                }
            }
        }
        if (arr[j] == repeat)
        {
            break;
        }
    }
    getch();
    return 0;
}