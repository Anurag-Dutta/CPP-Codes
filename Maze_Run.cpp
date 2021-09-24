#include <bits/stdc++.h>
#include <conio.h>

using namespace std;
int count(int startx, int starty, int endx, int endy)
{
    if (startx == endx - 1 && starty == endy - 1)
    {
        return 1;
    }
    else if (startx >= endx || starty >= endy)
    {
        return 0;
    }
    else
    {
        return (count(startx + 1, starty, endx, endy) + count(startx, starty + 1, endx, endy)); //only one step can be taken at a time
    }
}
int main()
{
    int x_end, x_start, y_end, y_start;
    cout << "Enter the Starting x coordinate: ";
    cin >> x_start;
    cout << "\nEnter the Starting y coordinate: ";
    cin >> y_start;
    cout << "\nEnter the Ending x coordinate: ";
    cin >> x_end;
    cout << "\nEnter the Ending y coordinate: ";
    cin >> y_end;
    cout << "\nTotal number of possibilities: " << count(x_start, y_start, x_end, y_end) << endl;
    getch();
    return 0;
}