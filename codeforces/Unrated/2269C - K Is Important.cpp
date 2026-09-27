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
    int n, k;
    cin >> n >> k;

    vector<ll> a(n+1);

    for(ll i = 1;  i <= n; i++) cin >> a[i];

    ll score = 0;

    if( n > 2*(k-1))
    {
        for(ll i = k; i <= (n-k+1); i++){
            score += a[i];
        }
        for(int i = 1; i <= k-1; i++){
            score += max(a[i], a[n-i+1]);
        }
    }
    else {
        for(ll i = 1; i <= (n-k+1); i++){
            score += max(a[i], a[n-i+1]);
        }
    }
    
    cout << score << '\n';


    
    
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