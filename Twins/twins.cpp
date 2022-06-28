#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int coins[n];

    for (int i = 0; i < n; i++)
    {
        cin >> coins[i];
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 1; j < n; j++)
        {
            if (coins[i] < coins[j])
            {
                int temp = coins[i];
                coins[i] = coins[j];
                coins[j] = temp;
            }
        }
    }

    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += coins[i];
    }

    int halfSum = sum / 2;
    int tempSum = 0;
    int cnt = 0;
    while (halfSum >= tempSum)
    {
        tempSum += coins[cnt];
        cnt++;
    }

    cout << cnt;
    return 0;
}