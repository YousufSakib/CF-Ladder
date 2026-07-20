#include <bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;

    while(t--){

        int x1, p1, x2, p2, l1, l2, y1, y2;

        cin >> x1 >> p1 >> x2 >> p2;

        l1 = floor(log10(x1)) + 1 + p1;
        l2 = floor(log10(x2)) + 1 + p2;

        y1 = x1 * pow(10, (7 - floor(log10(x1)) + 1));
        y2 = x2 * pow(10, (7 - floor(log10(x2)) + 1));

        if(l1 < l2) cout << "<" << endl;
        else if(l1 > l2) cout << ">" << endl;
        else if(y1 < y2) cout << "<" << endl;
        else if(y1 > y2) cout << ">" << endl;
        else cout << "=" << endl; 
    }
}