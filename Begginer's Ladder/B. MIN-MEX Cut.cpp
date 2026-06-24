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

        int mexSum = 0;

        char prev;

        for (int i = 0; i < s.size(); i++)
        {
            if (i == 0 && s[i] == '0')
                mexSum++;

            if (i && s[i] == '0' && prev == '1')
                mexSum++;

            prev = s[i];
        }

        cout << min(mexSum, 2) << endl;
    }
    return 0;
}