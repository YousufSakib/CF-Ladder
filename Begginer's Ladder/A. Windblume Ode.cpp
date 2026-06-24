#include <bits/stdc++.h>
using namespace std;

int isComposite(int n)
{
    if (n == 1 || n == 2 || n == 3)
        return 0;
    if (n % 2 == 0)
        return 1;

    for (int i = 3; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return 1;
    }

    return 0;
}

int main()
{
    int tt;

    cin >> tt;

    while (tt--)
    {
        int n, sum = 0;

        cin >> n;

        vector<int> a(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum = sum + a[i];
        }

        if (isComposite(sum))
        {
            cout << n << endl;
            for (int i = 0; i < n; i++)
            {
                cout << i + 1 << " ";
            }
            cout << endl;
            continue;
        }

        bool oddF = false;
        cout << n - 1 << endl;
        for (int i = 0; i < n; i++)
        {

            if (a[i] % 2 == 1 && !oddF)
            {
                oddF = true;
            }
            else
            {
                cout << i + 1 << " ";
            }
        }

        cout << endl;
    }
    return 0;
}