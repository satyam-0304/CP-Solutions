#include <bits/stdc++.h>
using namespace std;

// --- Speed Optimization ---
void fast_io() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
}

// --- Type Aliases & Utilities ---
using ll = long long;
using ld = long double;
const ll INF = 1e18;
const ll MOD = 1e9 + 7; // 1000000007

// --- Core Logic Goes Here ---
void solve() {

    // Your code starts here
    ll n;
    cin >> n;
    int a = 0;
    int b = 0;
    for(int i = 2; i*i <= n; i++){
        if( n % i == 0){
            a = n / i;
            b = n - a;
            cout << a << " " << b << '\n';

            return ;
        }
    }
    cout << 1 << " " << n -1 << '\n';

    
    
    
}

int main() {
    // Optimize standard I/O operations
    fast_io();

    int t ;
    cin >> t; // Reads number of test cases
    
    while (t--) {
        solve();
    }

    return 0;
}