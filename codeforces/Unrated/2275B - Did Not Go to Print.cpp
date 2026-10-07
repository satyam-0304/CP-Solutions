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
    ll n;
    cin >> n;

    string s;
    cin >> s;

    stack<int> st;
    vector<int> a;

    for(int i = 0; i < n; i++){
        char ch = s[i];
        if( ch == '1'){
            st.push(i+1);
        }
        else if( ch == '2'){
            if(!st.empty()){
                a.push_back(i+1);
                st.pop();
            }
        }
    }
    while(!st.empty()){
        a.push_back(st.top());
        st.pop();
    }
    cout << a.size() << '\n';

    bool t = is_sorted(a.begin(), a.end());
    if( !t ) {
        sort(a.begin(), a.end());
    }
    for(int i : a){
        cout << i << ' ';
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