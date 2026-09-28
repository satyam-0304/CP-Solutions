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

    ll n, d;
    cin >> n >> d;

    vector<ll> a(n);

    for(ll &x: a) cin >> x;

    ll m = n;

    sort(a.rbegin(), a.rend());
    ll teams = 0;

    for(int i = 0; i < n; i++){
        int y = a[i];
        int x = 1;

        while( y <= d && m != 0){
            x++;
            y += a[i];
            m--;
        }
        if(y > d && m != 0) teams++ , m--;
        
    }
    cout << teams << '\n';
    

    return 0;
}