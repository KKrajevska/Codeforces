#include <iostream>
using namespace std;

int main()
{
    string s, newStr;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        s[i] = tolower(s[i]);
        if (s[i] != 'a' && s[i] != 'o' && s[i] != 'y' && s[i] != 'e' && s[i] != 'u' && s[i] != 'i')
        {
            newStr += ".";
            newStr += s[i];
        }
    }

    cout << newStr;
    return 0;
}