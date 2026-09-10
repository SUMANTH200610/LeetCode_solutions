class Solution {
public:
    bool isValid(string s) {
        stack<int>st;
        //int c == 0
        for(int i = 0;i<s.size();i++){
            if(s[i] == '{' || s[i] == '[' || s[i] == '('){
                st.push(s[i]);
               // c++;
            }
            else{
                if(st.empty()){
                    return false;
                }
                else if(s[i] == '}' && st.top() != '{') return false;
                else if(s[i] == ']' && st.top() != '[') return false;
                else if(s[i] == ')' && st.top() != '(') return false;
                st.pop();
            }
        }
     //   return true;
     return st.empty();

    }
};