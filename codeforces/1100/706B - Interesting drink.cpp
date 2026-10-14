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

    vector<int> a(n);
    for(int &i : a){
        cin >> i;
    }
    sort(a.begin(), a.end());

    int q;
    cin >> q;
    while(q--){
        int t;
        cin >> t;
        int cnt = 0;
        auto it = upper_bound(a.begin(), a.end(), t);
        cnt = (it - a.begin());
        
        cout << cnt << '\n';
    }


    
    
}

int main() {
    // Optimize standard I/O operations
    fast_io();

    solve();

    return 0;
}