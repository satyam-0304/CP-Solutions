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

    if(n == 1){
        cout << 1 << '\n';
        return ;
    }
    set<int> myset(a.begin(), a.end());
    vector<int> b(myset.begin(), myset.end());

    sort(b.begin(), b.end());

    int curr = 1, maxx = 1;

    for(int i = 1; i < b.size(); i++){
        if(b[i] == (b[i-1] + 1)){
            curr++;
        }
        else {
            maxx = max(curr, maxx);
            curr = 1;
        }
    }
    maxx = max(curr, maxx);
    cout << maxx << endl;


    
    
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