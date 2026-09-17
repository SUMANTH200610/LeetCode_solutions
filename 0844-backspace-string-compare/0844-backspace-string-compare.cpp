class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char>ss;
        stack<char>st;
        for(int i = 0;i<s.size();i++){
            if(s[i] !='#'){
                
                ss.push(s[i]);
            }
                else{
                    if(!ss.empty()){
                    ss.pop();
                    }
                }
        }
        for(int i = 0;i<t.size();i++){
            if(t[i] !='#'){
                st.push(t[i]);
            }
                else{ 
                    if(!st.empty()){
                    st.pop();
                    }
                }
        }
        string ans1 = "",ans2 = "";
        while(!ss.empty()){
            ans1.push_back(ss.top());
            ss.pop();
        }
        while(!st.empty()){
            ans2.push_back(st.top());
            st.pop();
        }
        return ans1 == ans2;
        //return true;
    }
};