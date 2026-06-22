#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        int arr[3];

        cin >> arr[0] >> arr[1] >> arr[2];

        int mx = max(max(arr[0], arr[1]), arr[2]);

        int mn = min(min(arr[0], arr[1]), arr[2]);

        int md = arr[0] + arr[1] + arr[2] - mn - mx;

        for (int i = 0; i < 3; i++)
        {
            if (mx == arr[i] && mx == md)
                cout << 1 << " ";
            else if (mx == arr[i])
                cout << 0 << " ";
            else
                cout << mx - arr[i] + 1 << " ";
        }
        cout << endl;
    }
    return 0;
}