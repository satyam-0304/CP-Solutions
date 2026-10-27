class Solution {
public:
    vector<string> createGrid(int m, int n) {
        vector<string> ss;
        string s = "";
        for(int k = 0; k < n; k++){
            s += ".";
        }
        ss.push_back(s);
        
        for(int i = 1; i < m ; i++){
            string t = "";
            for(int j = 0; j < n ; j++){
                if(j == n-1) t += ".";
                else t += "#";
            }
            ss.push_back(t);
        }

        return ss;
    }
};


/*




*/