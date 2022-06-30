#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int m[n][3];

    int sumx = 0;
    int sumy = 0;
    int sumz = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> m[i][0] >> m[i][1] >> m[i][2];
        sumx += m[i][0];
        sumy += m[i][1];
        sumz += m[i][2];
    }

    if (sumx == 0 && sumy == 0 && sumz == 0)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}