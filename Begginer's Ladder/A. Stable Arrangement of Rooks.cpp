#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        if ((n + 1) / 2 < k)
        {
            cout << -1 << endl;
        }
        else
        {
            for (int i = 1; i <= n; i++)
            {
                for (int j = 1; j <= n; j++)
                {
                    if (i == j && i % 2 == 1 && k > 0)
                    {
                        cout << "R";
                        k--;
                    }
                    else
                        cout << ".";
                }
                cout << endl;
            }
        }
    }
}
