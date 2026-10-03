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
const ll MOD1 = 1e6; // 1000000007

// --- Core Logic Goes Here ---
void solve() {

    // Your code starts here
    ll n;
    cin >> n;
    string a, b;

    cin >> a >> b;

    vector<int> x;
    vector<int> y;

    int x_even = 0, x_odd = 0;
    int y_even = 0, y_odd = 0;

    vector<int> a_even, b_even, a_odd, b_odd;


    for(int i = 0; i < n; i++){
        if(a[i] == '1'){
            x.push_back(i);
            if( i % 2) x_odd++, a_odd.push_back(i);
            else x_even++, a_even.push_back(i);
        } 
        if(b[i] == '1') {
            y.push_back(i);
            if( i % 2) y_odd++, b_odd.push_back(i);
            else y_even++, b_even.push_back(i);
        }
    }

    
    ll min_ops = 0;
    
    
    
    if( x_even == y_even && x_odd == y_odd){
        for(int i=0; i < x_even; i++){
            min_ops += abs(a_even[i]-b_even[i]);
        }
        for(int i=0; i < y_odd; i++){
            min_ops += abs(a_odd[i]-b_odd[i]);
        }
        cout << min_ops/2 << '\n';
        
    }
    else cout << -1 << '\n';
    
    
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
// for(int i = 0; i < x.size(); i++){
//     int minn = INT_MAX;
//     for(int j = 0; j < y.size(); j++){
//         if(z[j] != 1 && (x[i] % 2 == y[j]% 2)){
//             int l = abs(x[i]-y[j]);
//             if(l < minn){
//                 min_ops += l;
//                 minn = l;
//                 z[j] = 1;
//             }
//         }
//     }
// }