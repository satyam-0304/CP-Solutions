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
    for(int &i : a) cin >> i;

   

    sort(rbegin(a), rend(a));
    ll s1 = 0, s2 = 0;
    for(int i = 0; i < n ; i++){
        ll j = (1 << a[i]);
        if(s1 < s2){
            s1 += j;
        }
        else {
            s2 += j;
        }
    }

    ll ans = s1*s2;
    cout << ans << endl;

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