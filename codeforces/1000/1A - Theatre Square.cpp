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

    ll n, m , a;
    cin >> n >> m >> a;
    long double c1 = ceil((double)n/a);
    long double c2 = ceil((double)m/a);

    cout << fixed << setprecision(0) << c1*c2 << endl;

    return 0;
}