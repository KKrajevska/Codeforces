#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int days[n];
    for (int i = 0; i < n; i++)
    {
        cin >> days[i];
    }

    int cnt = 1;
    int max = 0;
    if (n == 1)
    {
        cout << 1;
    }
    else
    {
        for (int i = 1; i < n; i++)
        {

            if (days[i] >= days[i - 1])
            {
                cnt++;
            }
            else
                cnt = 1;
            if (cnt > max)
            {
                max = cnt;
            }
        }
        cout << max;
    }
    return 0;
}