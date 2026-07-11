#include <iostream>
#include <cmath>

using namespace std;

int main() {
    
    int t, n, a, b, c = 1;
    
    cin >> t;
    
    while(t--){
        cin >> n;
        
        if(n % 2 == 0){
            a = n - 3;
            b = 2;
        }
        else if(n % 4 == 1){
            a = floor(n / 2) - 1;
            b = floor(n / 2) + 1;
        }else{
            a = floor(n / 2) - 2;
            b = floor(n / 2) + 2;
        }
        
        cout << a << " " << b << " " << c << endl;
    }
    
    return 0;
}