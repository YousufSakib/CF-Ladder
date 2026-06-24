#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tt;

    cin >> tt;

    while (tt--)
    {
        int n, s;

        cin >> n >> s;

        int m = n / 2 + 1;

        cout << s / m << endl;
    }
    return 0;
}