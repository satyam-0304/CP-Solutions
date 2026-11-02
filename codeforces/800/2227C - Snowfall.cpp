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
    cin >> n ;

    vector<int> a(n);
    for(int &i : a) cin >> i;
    
    
    vector<int> b; // contains divisble by 2 nd 6
    vector<int> c; // only divisible by 2
    vector<int> d; // only not divisible by 2 but by 3
    vector<int> e; // only not divisible by 3

    for(int i : a){
        if(i % 6 == 0) b.push_back(i);
        else if( i % 2 == 0) c.push_back(i);
        else if( i % 3 == 0) d.push_back(i);
        else e.push_back(i);
    }
    sort(b.begin(), b.end());
    sort(c.begin(), c.end());
    sort(d.begin(), d.end());
    sort(e.begin(), e.end());

    b.insert(b.end(), c.begin(), c.end());
    b.insert(b.end(), e.begin(), e.end());
    b.insert(b.end(), d.begin(), d.end());

    for(int i: b){
        cout << i << " ";
    }
    cout << endl;
    
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