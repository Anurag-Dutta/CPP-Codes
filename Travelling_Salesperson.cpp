/*
    AUTHOR: BlueKnight
    STARTED: 2021-08-03 18:20:16
*/
#include <bits/stdc++.h>
#include <conio.h>

using namespace std;
int fact(int n)
{
    if (n == 1 || n == 0)
    {
        return 1;
    }
    else
    {
        return n * fact(n - 1);
    }
}
void permute(string str, string ans, double xs[], double ys[], double dist[], int size, int rcn)
{
    if (str.length() == 0)
    {
        double d = 0;
        for (int i = 0; i < ans.length() - 1; i++)
        {
            double x1 = xs[ans[i] - 49];
            double y1 = ys[ans[i] - 49];
            double x2 = xs[ans[i + 1] - 49];
            double y2 = ys[ans[i + 1] - 49];
            d += sqrt(((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1)));
        }
        dist[rcn] = d;
        cout << dist[rcn] << endl;
    }
    else
    {
        for (int i = 0; i < str.length(); i++)
        {
            char additive = str[i];
            permute((str.substr(0, i) + str.substr(i + 1)), ans + additive, xs, ys, dist, size, rcn);
        }
    }
}
int main()
{
    int n;
    cout << "Enter the number of cities: ";
    cin >> n;
    string s = "";
    for (int i = 1; i <= n; i++)
    {
        s += i + 48;
    }
    string vault = "";
    double arrx[n], arry[n];
    for (int i = 0; i < n; i++)
    {
        cout << "\nEnter the X Coordinate of City " << i + 1 << ": ";
        cin >> arrx[i];
        cout << "\nEnter the Y Coordinate of City " << i + 1 << ": ";
        cin >> arry[i];
    }
    double dist_tot[fact(n)];
    int sz = fact(n);
    int racoon = 0;
    permute(s, vault, arrx, arry, dist_tot, sz, racoon);
}
/*
    AUTHOR: BlueKnight
    COMPLETD: 2021-08-03 20:52:12
*/
