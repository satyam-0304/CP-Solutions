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

    vector<int> a(n), res;
    for(int &x : a) cin >> x;

    sort(a.rbegin(), a.rend());

    while(!a.empty()){
        vector<int> b;
        for(int x : a){
            if( !res.empty() && res.back() == x) b.push_back(x);
            else res.push_back(x);
        }
        res.push_back(0);
        a = b;
    }

    for(int i : res){
        if(i) cout << i << ' ';
    }
    cout << '\n';

    
    
    
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