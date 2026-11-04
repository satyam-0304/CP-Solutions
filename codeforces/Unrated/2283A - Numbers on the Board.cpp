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
    int n,m;
    cin >> n >> m;
    int ans =0;
    if(n < 0 && m > 0){
        if( abs(n) < m){
            ans = (m + n) - 1;
        }
        else if( abs(n) > m){
            ans = (abs(n) - m) - 1;
        }
        else {
            ans = 0;
        }
    }
    else if((n < 0 && m < 0) || (n > 0 && m > 0) ){
        n = abs(n), m = abs(m);
        ans = (abs(n-m));
    }
    else if(n == 0 || m == 0){
        n = abs(n), m = abs(m);
        ans = abs(n-m)-1;
    }
    cout << (ans >= 0 ?  (ans):0) << endl;

    
    
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