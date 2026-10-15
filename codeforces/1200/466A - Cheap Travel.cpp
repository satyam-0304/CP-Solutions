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
    int n, m, a, b;
    cin >> n >> m >> a >> b;

    int costa = n*a;
    int costab = (n/m) * b + (n % m)*a;
    int costb = ((n+m-1)/m)*b;
    cout << (costa < costab && costa < costb ? costa : (costab < costb ? costab : costb));
    
}

int main() {
    // Optimize standard I/O operations
    fast_io();

    solve();

    return 0;
}