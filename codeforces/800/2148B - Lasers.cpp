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
    int n, m , x, y;
    cin >> n >> m >> x >> y;

    vector<int> a(n);
    vector<int> b(m);
    for(int &i : a) cin >> i;
    for(int &i : b) cin >> i;
    

    int cnt = 0;
    //y-axis : y-a[i] >= 0 cnt++
    for(int i = 0; i < n; i++){
        if(y-a[i] >= 0){
            cnt++;
        }
    }
    for(int i = 0; i < m; i++){
        if(x-b[i] >= 0){
            cnt++;
        }
    }
    cout << cnt << endl;
    
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