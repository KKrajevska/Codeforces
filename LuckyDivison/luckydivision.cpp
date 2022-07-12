#include <iostream>
using namespace std;

int checkLucky(int n)
{
    while (n > 0)
    {
        if (n % 10 != 4 && n % 10 != 7)
        {
            return 0;
        }
        n = n / 10;
    }
    return 1;
}

int main()
{
    int n;
    cin >> n;
    int flag = 0;
    if (checkLucky(n) == 1)
    {
        cout << "YES";
    }
    else if (n % 4 == 0 || n % 7 == 0)
    {
        cout << "YES";
    }
    else
    {
        for (int i = 2; i < n; i++)
        {

            if (checkLucky(i) == 1)
            {
                if (n % i == 0)
                {
                    flag = 1;
                    break;
                }
            }
        }
        if (flag == 1)
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }
    }
    return 0;
}