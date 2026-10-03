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
    ll n;
    cin >> n;
    string a, b;

    cin >> a >> b;

    vector<int> x;
    vector<int> y;

    int x_even = 0, x_odd = 0;
    int y_even = 0, y_odd = 0;


    for(int i = 0; i < n; i++){
        if(a[i] == '1'){
            x.push_back(i);
            if( i % 2) x_odd++;
            else x_even++;
        } 
        if(b[i] == '1') {
            y.push_back(i);
            if( i % 2) y_odd++;
            else y_even++;
        }
    }

    if( x_even == y_even && x_odd == y_odd){
        cout << "YES\n";
    }
    else cout << "NO\n";
    

    
    
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