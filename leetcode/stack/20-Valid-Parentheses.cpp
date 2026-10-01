class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        st.push('1');
        int i = 0;
        while(!st.empty() && i < s.size()){
            char c = s[i];
            if( c == '(' || c == '[' || c == '{'){
                st.push(c);
            }
            else {
                if( c == ')' && st.top() != '('){
                    return false;
                }
                else if( c == '}' && st.top() != '{'){
                    return false;
                }
                else if( c == ']' && st.top() != '['){
                    return false;
                }
                else {
                    st.pop();
                }
            }
            i++;
        }
        if(st.top() != '1') return false;
        return true ;
    }
};