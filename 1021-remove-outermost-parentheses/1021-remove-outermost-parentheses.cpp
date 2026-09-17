class Solution {
public:
    string removeOuterParentheses(string s) {
        int sum = 0;
        string str = "";
        for(int i = 0;i<s.size();i++){
            if(s[i] == '(') {
                sum++;
                if(sum > 1) str.push_back(s[i]);
            }
            
           // if(sum == 1 || sum == 0) continue;
            else{
                sum--;
                if(sum>=1){
            str.push_back(s[i]);
            }
            

        }
        }
        return str;
    }
};