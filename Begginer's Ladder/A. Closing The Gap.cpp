#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        int n, tmp;
        double sum = 0;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> tmp;
            sum = sum + tmp;
        }

        if (ceil(sum / n) == floor((sum + n) / n))
            cout << "1\n";
        else
            cout << "0\n";
    }
    return 0;
}