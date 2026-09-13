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

    vector<int> arr(n);
    int cnt0 = 0;
    int cnt1 = 0;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        if( arr[i] == 0) cnt0++;
        else cnt1++;
    }
    //if [1] -> bessie wins
    //else [0] ->elsie wins

    //cases formatiom
    /*
    edge cases : i = 0 -> then if
    
    
    */

    if(cnt1>=cnt0){
        cout << "Bessie" << '\n';
    }
    else cout << "Elsie" << '\n';




    
    
    
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