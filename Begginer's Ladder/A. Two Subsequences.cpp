#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        string s;

        cin >> s;

        char least_c = 'z';

        for (char c : s)
        {
            if (c < least_c)
                least_c = c;
        }

        cout << least_c << " ";

        for (auto it = s.rbegin(); it != s.rend(); ++it)
        {
            if (*it == least_c)
            {
                *it = '?';
                break;
            }
        }

        for (auto it = s.begin(); it != s.end(); ++it)
        {
            if (*it != '?')
                cout << *it;
        }

        cout << endl;
    }
    return 0;
}