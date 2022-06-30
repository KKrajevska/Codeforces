#include <iostream>
using namespace std;

int value(int side, int a)
{
    if (side % a == 0)
    {
        return side / a;
    }
    return (side / a) + 1;
}

int main()
{
    int m, n, a;

    cin >> m >> n >> a;

    long long int horizontal = value(m, a);
    long long int vertical = value(n, a);

    cout << horizontal * vertical;
}