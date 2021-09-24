#include <bits/stdc++.h>
#include <conio.h>

using namespace std;
int main()
{
    char sentence[1000];
    cout << "Enter the word : ";
    cin.getline(sentence, 1000);
    int init[100] = {0}, final[100] = {0}, diff[100] = {0}, j = 0, count = 0, c = 0;
    for (int i = 0; i < 1000; i++)
    {
        if (sentence[i] == '\0')
        {
            break;
        }
        count++;
    }
    for (int i = 0; i < 1000; i++)
    {
        if (sentence[i] == ' ')
        {
            init[j + 1] = i + 1;
            final[j] = i - 1;
            j++;
            c++;
        }
        if (sentence[i] == '\0')
        {
            break;
        }
    }
    final[c] = count - 1;
    for (int i = 0; i <= c; i++)
    {
        diff[i] = final[i] - init[i];
    }
    int max = diff[0];
    int maxi = init[0], maxf = final[0];
    for (int i = 0; i <= c; i++)
    {
        if ((final[i] - init[i]) > max)
        {
            maxi = init[i];
            maxf = final[i];
            max = diff[i];
        }
    }
    cout << "\nLongest Word : ";
    for (int i = maxi; i <= maxf; i++)
    {
        cout << sentence[i];
    }
    getch();
    return 0;
}