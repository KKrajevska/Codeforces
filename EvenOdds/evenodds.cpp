#include <iostream>
using namespace std;

int main()
{
    long long int n, k;
    cin >> n >> k;

    long long int half = (n + 1) / 2;

    if (k <= half)
    {
        cout << (k * 2) - 1;
    }
    else
    {
        cout << (k - half) * 2;
    }

    return 0;
}