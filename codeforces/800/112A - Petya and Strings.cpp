
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

    string s1, s2;
    cin >> s1 >> s2;

    

    for(char &ch : s1) {
        ch = tolower(ch);
    }
    for(char &ch : s2) {
        ch = tolower(ch);
    }

    for(int i = 0; i < s1.size(); i++){
        
        if(s1[i] == s2[i]){continue;}
        else {
            cout << (s1[i] > s2[i] ? 1 : (s1[i] < s2[i] ? -1 : 0) )<<'\n'; return 0;
        }
    }
    cout << 0 << '\n';
    return 0;
}