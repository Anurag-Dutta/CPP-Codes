#include <bits/stdc++.h>
#include <conio.h>

using namespace std;
struct Participants
{
    string username;
    int score;
} p[100];
int main()
{
    int n;
    cout << "Enter the number of participants : ";
    cin >> n;
    int arr_score[n];
    string arr_name[n];
    for (int i = 0; i < n; i++)
    {
        cout << "\n\nFor Participant " << i + 1 << " : " << endl;
        cout << "Enter NAME : ";
        cin >> p[i].username;
        cout << "\nEnter Score : ";
        cin >> p[i].score;
        arr_score[i] = p[i].score;
        arr_name[i] = p[i].username;
    }
    sort(arr_score, arr_score + n);
    cout << "\n\nRANKLIST\n\n"
         << endl;
    cout << "UserName\tScore\n"
         << endl;
    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr_score[i] == p[j].score)
            {
                cout << p[j].username << "\t\t" << p[j].score << endl;
                break;
            }
        }
    }
    getch();
    return 0;
}