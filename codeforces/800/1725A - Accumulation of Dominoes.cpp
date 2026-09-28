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
    
    
}

int main() {
    // Optimize standard I/O operations
    fast_io();

    ll n, m;
    cin >> n >> m;

    if(n != 1 && m != 1){
        cout << n*(m-1) << '\n';
    }
    else if( n == 1 && m == 1){
        cout << 0 << '\n';
    }
    else {
        if( n == 1){
            cout << m-1 << '\n';
        }
        else if( m == 1){
            cout << n-1 << '\n';
        }
    }

    return 0;
}