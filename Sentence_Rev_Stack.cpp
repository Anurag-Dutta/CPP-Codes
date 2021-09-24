/*
    AUTHOR: BlueKnight
    CREATED: 2021-09-18 17:41:37
*/
#include <bits/stdc++.h>
#include <conio.h>

using namespace std;

void reverse(string sentence)
{
    stack<string> rev;
    for(int i=0;i<sentence.size();i++)
    {
        string word = "";
        while(sentence[i]!=' '&&i<sentence.size())
        {
            word.push_back(sentence[i]);
            i++;
        }
        rev.push(word);
    }
    while(!rev.empty())
    {
        cout << rev.top() << " ";
        rev.pop();
    }
}
int main()
{
    string sentence;
    cout << "Enter the Sentence: ";
    getline(cin, sentence);
    reverse(sentence);
    getch();
    return 0;
}