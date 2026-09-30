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
    char arr[8][8];
    for(int i = 0; i < 8;i++){
        for(int j = 0; j < 8;j++){
            cin >> arr[i][j];
        }
    }
    int row = 0;
    int col = 0;

    for(int i = 1; i < 7; i++){
        for(int j = 1; j < 7;j++){
            if(arr[i][j] == '#'){
                if(arr[i-1][j-1] == '#' && arr[i+1][j+1] == '#'){
                    if(arr[i-1][j+1] == '#' && arr[i+1][j-1] == '#'){
                        row = i;
                        col = j;

                        break;
                    }
                }
            }
        }
    }
    cout << row+1 << " " <<  col+1 << '\n';
    return ;
    
    
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