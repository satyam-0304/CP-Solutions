class Solution {
public:
    int reverseDegree(string s) {
        int revDeg = 0;
        for(int i = 0; i < s.size(); i++){
            int x = 'z' - s[i] + 1;

            revDeg += (x*(i+1));
        }
        return revDeg;
    }
};