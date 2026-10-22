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
    string s;
    cin >> s;

    set<int> a;
    a.insert(0);
    for(int i = 1; i < s.size(); i++){
        if(s[i-1] == '0' && s[i] == '0' && s[i+1] == '0' ){
            a.insert(2);
        }
        if(s[i-1] == '1' && s[i] == '1' && s[i+1] == '1' ){
            a.insert(2);
        }
        if(s[i-1] == '0' && s[i] == '1' && s[i+1] == '0' ){
            a.insert(-2);
        }
        if(s[i-1] == '1' && s[i] == '0' && s[i+1] == '1' ){
            a.insert(-2);
        }
    }
    cout << a.size() << endl;


    
    
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