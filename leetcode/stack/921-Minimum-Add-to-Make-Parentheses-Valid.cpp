class Solution {
public:
    int minAddToMakeValid(string s) {
        int n= s.size();

        int cnt = 0;
        stack<char> st;
        for(int i = 0; i < n; i++){
            if(s[i] == '(')st.push('(');

            if(s[i] == ')'){
                if(st.empty()){
                    cnt++;
                }
                else {
                    st.pop();
                }
            }
        }
        return abs(cnt) + st.size();
        
    }
};