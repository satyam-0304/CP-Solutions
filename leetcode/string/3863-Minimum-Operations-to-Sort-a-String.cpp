class Solution {
public:
    int minOperations(string s) {
        string t = s;
        if(s.size() == 1) return 0;
        if(s.size() >= 2){

            sort(t.begin(), t.end());
            if(t != s && t.size() == 2) return -1;
            char max_char = *max_element(t.begin(), t.end());
            char min_char = *min_element(s.begin(), s.end());

            char max_mid = *max_element(s.begin()+1, s.end()-1);
            char min_mid = *min_element(s.begin()+1, s.end()-1);


            if(t == s){
                return 0;
            }
            else if(max_char == s[s.size()-1] || min_char == s[0]) return 1;
            
            else if(s[0] > max_mid && min_mid > s[s.size()-1]){
                return 3;
            }
        }
        return 2;

    }
};


/*
dog -> dgo -> ops = 1;
card -> acdr -> ops = 2

satyam -> aamsty -> ops = 
aastym -> aa msty -> aamsty = 2

child -> cdhil-> ops =
chil d -> c dhil = ops = 2

car -> acr ops = 1;
tri -> irt-> 3
def -> 

*/