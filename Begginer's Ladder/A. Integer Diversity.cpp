#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tt;

    cin >> tt;

    while (tt--)
    {
        int n, tmp;
        cin >> n;
        vector<int> cnt(101, 0);

        for (int i = 0; i < n; i++)
        {
            cin >> tmp;
            cnt[abs(tmp)]++;
        }

        int ans = min(1, cnt[0]);

        for (int i = 1; i < 101; i++)
        {
            ans = ans + min(2, cnt[i]);
        }

        cout << ans << endl;
    }
}