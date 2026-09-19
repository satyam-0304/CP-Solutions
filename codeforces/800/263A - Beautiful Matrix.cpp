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
    int matrix[5][5];
    int row, col;

    for (int i = 0; i < 5; ++i) { // Outer loop for rows
        for (int j = 0; j < 5; ++j) { // Inner loop for columns
            cin >> matrix[i][j];
            if(matrix[i][j] == 1){
                row = i+1;
                col = j+1;
            }
        }
    }
    int result = abs(row-3) + abs(col-3); 
    cout << result << '\n';

    
    
}

int main() {
    // Optimize standard I/O operations
    fast_io();

    solve();

    return 0;
}