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

    int curr = 0;
    int maxx = 0;

    for(int i = 0; i < s.size(); i++){
        char ch = s[i];
        if( ch == '#'){
            curr++;
        }
        else {
            curr = 0;
        }
        maxx = max(curr, maxx);
    }
    cout << (maxx/2 + maxx % 2) << endl;
    
    
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