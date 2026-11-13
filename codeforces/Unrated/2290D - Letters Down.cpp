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

bool ispalindrome(string s){
    int n = s.size();
    int l = 0; 
    int r = n-1;
    while(l <= r){
        if(s[l] != s[r]) return false;
        l++;
        r--;
    }
    return true;
}
// --- Core Logic Goes Here ---
void solve() {

    // Your code starts here
    int n;
    cin >> n;

    string s;
    cin >> s;

    if(ispalindrome(s)){
        cout << 0 << endl;
        return ;
    }

    vector<bool> arr(26);


    int l = 0, r = n-1;
    while(l < r){
        char local_max , local_min;
        if(s[l] > s[r]) {
            local_max = s[l];
            local_min = s[r]+1;
        }
        else {
            local_max = s[r];
            local_min = s[l]+1;
        }

        int k = local_min - 'a';
        int j = local_max - 'a';
        for(int i = k; i <= j; i++){
            arr[i] = 1;
        }
        l++;
        r--;
    }
    int cnt = 0;
    for(int i : arr){
        if(i == 1) cnt++;
    }
    cout << cnt << endl;
    
    
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