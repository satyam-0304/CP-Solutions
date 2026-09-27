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
ll  getsquared(ll n){
    ll squared = 0;
    while(n > 0){
        int m = n % 10;
        squared = squared + (m*m);
        n /= 10;
    }
    return squared;
}

void solve() {

    // Your code starts here

    int n ;
    cin >> n;

    vector<int> a(n);
    for(int &x : a) cin >> x;

    vector<int> ans(n);

    for(int i = 0; i <= n-1; i++){
        int m = a[i];
        int r ;
        for(int j = 1; j <= 100; j++){
            r = getsquared(m);
            m = r;
        }
        ans[i] = r;
    }

    int pair = 0;
    for(int i = 0; i < n; i ++){
        for(int j = i+1; j < n; j++){
            if(ans[i] == ans[j]) pair++;
        }
    }
    cout << pair << '\n';

    
    
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