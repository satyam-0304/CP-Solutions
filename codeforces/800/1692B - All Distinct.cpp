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
    map<int , int> freq;
    for(int &i : a){
        cin >> i;
        freq[i]++;
    }

    int dulp_cnt = 0;

    for (const auto& [key, value] : freq){
        if (value != 1){
            dulp_cnt += (value-1);
        }
    }
    if(dulp_cnt % 2){
        dulp_cnt++;
        cout << n-dulp_cnt << '\n';
        return ;
    }
    cout << n-dulp_cnt << '\n';

    
    
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