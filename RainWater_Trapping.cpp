/*
    AUTHOR: BlueKnight
    CREATED: 2021-09-26 17:37:31
*/
#include <bits/stdc++.h>
#include <conio.h>

using namespace std;
vector<int> left_array(8);
vector<int> right_array(8);
void left_array_generation(vector<int> &heights)
{
    int init = heights[0];
    for (int i = 0; i < left_array.size(); i++)
    {
        if (heights[i] > init)
        {
            init = heights[i];
        }
        left_array[i] = init;
    }
}
void right_array_generation(vector<int> &heights)
{
    int init = heights[right_array.size() - 1];
    for (int i = right_array.size() - 1; i >= 0; i--)
    {
        if (heights[i] > init)
        {
            init = heights[i];
        }
        right_array[i] = init;
    }
}
int main()
{
    vector<int> heights = {3, 1, 2, 4, 0, 1, 3, 2};
    left_array_generation(heights);
    right_array_generation(heights);
    vector<int> water(8);
    for (int i = 0; i < water.size(); i++)
    {
        water[i] = min(left_array[i], right_array[i]) - heights[i];
    }
    int sum = 0;
    for (auto i : water)
    {
        sum += i;
    }
    cout << sum << endl;
    getch();
    return 0;
}