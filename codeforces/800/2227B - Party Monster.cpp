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

    stack<char> st;

    string s;
    cin >> s;

    int opening_brac = 0;
    int closing_brac = 0;

    for(char ch : s){
        if( ch == ')'){
            closing_brac++;
        }
        else opening_brac ++;
    }
    if( closing_brac != opening_brac) cout << "NO\n";
    else cout << "YES\n";
    
    
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