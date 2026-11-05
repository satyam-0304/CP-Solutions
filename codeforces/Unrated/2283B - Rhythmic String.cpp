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
    int n;
    cin >> n;

    vector<ll> a(n);
    for(ll &i : a) cin >> i;

    vector<vector<int>> div;
    int max_size = 0;
    for(int i =0; i < n; i++ ){
        int maxt = 0;
        for(int j  = 0; j < n; j++){
            if(a[j] % a[i] == 0 ){
                maxt++;
            }
        }
        max_size = max(maxt, max_size);
    }
    cout << n - max_size << endl;
    

    
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