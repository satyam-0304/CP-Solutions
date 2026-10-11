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
    int a, b;
    cin >> a >> b;
    
    if( b > a + 1){
        cout << -1 << '\n';
        return ;
    }
    if (a % 2 == b % 2){
        cout << a << '\n';
    }
    else {
        cout << a + 1 << '\n';
    }
    
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