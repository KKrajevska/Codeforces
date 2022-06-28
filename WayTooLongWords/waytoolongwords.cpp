#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string words[n];
    string word;
    for (int i = 0; i < n; i++)
    {
        cin >> word;
        if (word.length() > 10)
        {
            words[i] = word[0] + std::to_string(word.length() - 2) + word.back();
        }

        else
            words[i] = word;
    }

    for (int i = 0; i < n; i++)
    {
        cout << words[i] << endl;
    }

    return 0;
}