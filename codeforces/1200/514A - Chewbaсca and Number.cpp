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

    string t;
    cin >> t;

    if( t.size() == 1 && t[0] == '9'){
        cout << t << endl;
        return 0;
    }
    string ss = "";
    for(int i = 0; i < t.size(); i++){
        char ch = t[i];
        if( ch == '9' && i == 0){
            ss += ch;
            
        }
        else {
            int l = ch - '0';
            int k = 9-l;
            if(k < l){
                
                ss += (k + '0');
            }
            else {
                ss += ch;
            }
        }
    }
    cout << ss << endl;


    return 0;
}