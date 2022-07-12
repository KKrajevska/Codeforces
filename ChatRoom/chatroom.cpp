#include <iostream>
using namespace std;

int main()
{
    string s, word = "hello";
    cin >> s;
    int cnt = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == word[cnt])
        {
            cnt++;
        }
    }

    if (cnt == word.length())
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}