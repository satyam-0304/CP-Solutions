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

    string s;
    cin >> s;

    if(s.size() % 2){
        cout << "NO\n" ;
        return ;
    }
    else {
        int h = s.size()/2;
        int l = 0; 
        int r = h;
        while( r < s.size()){
            if(s[l] != s[r]){
                cout << "NO\n";
                return ;
            }
            l++, r++;
        }
        cout << "YES\n";
        return ;
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