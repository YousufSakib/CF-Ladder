#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        string s, t;
        cin >> s >> t;
        sort(s.begin(), s.end());
        vector<int> cnt(26, 0);
        for (auto x : s)
            cnt[x - 'a']++;
        if (t != "abc" || !cnt[0] || !cnt[1] || !cnt[2])
            cout << s;
        else
        {
            while (cnt[0]--)
                cout << "a";
            while (cnt[2]--)
                cout << "c";
            while (cnt[1]--)
                cout << "b";
            for (int i = 3; i < 26; i++)
            {
                while (cnt[i]--)
                    cout << char('a' + i);
            }
        }
        cout << endl;
    }
}