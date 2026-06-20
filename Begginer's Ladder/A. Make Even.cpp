#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        string str;

        cin >> str;

        int steps = -1;

        if ((str.back() - '0') % 2 == 0)
            steps = 0;
        else if ((str[0] - '0') % 2 == 0)
            steps = 1;
        else
        {
            for (char c : str)
            {
                if ((c - '0') % 2 == 0)
                    steps = 2;
            }
        }

        cout << steps << endl;
    }
    return 0;
}