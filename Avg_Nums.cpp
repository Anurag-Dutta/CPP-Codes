#include <bits/stdc++.h>
#include <conio.h>

using namespace std;

int main()
{
    int size;
    cout << "Enter the number of the elements : ";
    cin >> size;
    cout << endl;
    float arr[size], sum = 0;
    for (int i = 0; i < size; i++)
    {
        cout << "\n\n\nEnter element " << i + 1 << " : ";
        cin >> arr[i];
        sum += arr[i];
    }
    float avg = (sum / size);
    cout << "\nAverage : " << avg;
    getch();
    return 0;
}