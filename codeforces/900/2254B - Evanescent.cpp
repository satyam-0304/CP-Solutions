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

    string s;
    cin >> s;

     int ans = 1, x = 0;
        for(int i = 1; i < n; i++) {
            if(s[i] != s[i - 1]) ans++;
            if(i == n - 1) break;
            
            if(s[i] != s[i - 1] && s[i] != s[i + 1]) {
                if(s[i + 1] == s[i - 1]) x = 2;
                else x = max(x, 1);
            }
        }
        
        cout << ans - x << endl;

    
    
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