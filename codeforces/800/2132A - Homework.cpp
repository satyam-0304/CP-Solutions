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

    string a,b,c;
    cin >> a;
    int m;
    cin >> m;
    cin >> b;
    cin >> c;

    for(int i = 0; i < m; i++){
        char ch = c[i];
        if(ch == 'D'){
            a = a + b[i];
        }
        else {
            a = b[i] + a;
        }
    }
    cout << a << endl;
    
    
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