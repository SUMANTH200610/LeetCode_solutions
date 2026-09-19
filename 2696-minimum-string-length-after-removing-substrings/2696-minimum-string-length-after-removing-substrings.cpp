class Solution {
public:
    int minLength(string s) {
        stack<char>st;
        for(int i = 0;i<s.size();i++){
           // if(s[i] == 'A' || s[i] == 'B' || s[i] == 'C' || s[i] == 'D'){
                if(!st.empty() &&(st.top() == 'A' && s[i] == 'B' || (st.top() == 'C' && s[i] == 'D'))){
                // st.push(s[i]);
                st.pop();
                //st.pop();
                }
         //   }
            else st.push(s[i]);
        }

        return (int)st.size();
    }
};