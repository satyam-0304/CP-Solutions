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
    int n; cin >>n;

    vector<int> a(n);
    for(int &i : a) cin >> i;

    int m;
    cin >> m;
    vector<int> b(m);
    for(int &i : b ) cin >> i;

    vector<int> c(n+1);

    for(int i = 1; i <= n; i++){
        c[i] = c[i-1] + a[i-1];
    }
    
    for(int i : b){
        int target = i;
        auto it2 = lower_bound(c.begin(), c.end(), target);
        cout << it2-c.begin() << endl;
    }
    
    
}

int main() {
    // Optimize standard I/O operations
    fast_io();

    solve();

    return 0;
}