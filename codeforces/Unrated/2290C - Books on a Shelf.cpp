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

    vector<ll> a(n);
    for(ll &i : a) cin >> i;

    sort(begin(a), end(a));

    vector<ll> b;
    vector<ll> c;
   
    for(int i = 0; i <n ; i += 2){
        b.push_back(a[i]);
    }
    int cnt = 2;
    for(int i = 0; i < b.size()-1; i++){
        if(b[i] < b[i+1]) cnt++;
    }
    for(int i = 1; i < n;i += 2){
        c.push_back(a[i]);
    }
    
    sort(rbegin(c), rend(c));
    
    for(int i = 0; i < c.size();i++){
        b.push_back(c[i]);
        if(i < c.size()-1 && (c[i] > c[i+1])) cnt++;
    }

    cout << (n == 1 ? 1 : cnt)<< '\n';
    for(int i = 0; i < n; i++){
        cout << b[i] << " ";
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