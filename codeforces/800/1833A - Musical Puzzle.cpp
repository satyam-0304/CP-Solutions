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
    vector<string> a;
    string c(1, s[0]);
    c += s[1];
    a.push_back(c);
    for(int i = 2; i < n; i++){
        string c(1, s[i-1]);
        c += s[i];
        
        auto it = find(a.begin(), a.end(), c);
        if( it == a.end()){
            a.push_back(c);
        }

    }
    cout << a.size() << '\n';
    
    
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