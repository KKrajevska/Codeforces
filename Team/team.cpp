#include <iostream>
using namespace std;

int main()
{
    int n, petya, vasya, tonya;
    int result = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> petya >> vasya >> tonya;
        if (petya + vasya + tonya == 2 || petya + vasya + tonya == 3)
        {
            result += 1;
        }
    }

    cout << result;
    return 0;
}