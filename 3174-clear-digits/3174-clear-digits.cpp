class Solution {
public:
    string clearDigits(string s) {
        stack<int>st;
        for(char c:s){
            if(c >= '0' && c<= '9'){
                if(!st.empty()){
                    st.pop();
                    
                }
               // else continue;
            }
            else st.push(c);
        }
        string ans = "";
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};