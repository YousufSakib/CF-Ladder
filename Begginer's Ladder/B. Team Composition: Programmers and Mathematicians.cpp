#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        int a, b;

        cin >> a >> b;

        int ans = min(min(a, b), (a + b) / 4);

        cout << ans << endl;
    }
    return 0;
}