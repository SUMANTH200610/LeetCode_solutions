class Solution {
public:
    string removeOccurrences(string s, string part) {
        stack<char>st;
        string ans = "";
        string temp = "";
        for(int i = 0;i<s.size();i++){
           // temp+= s[i];
            st.push(s[i]);
            if(st.size() >= part.size()){
                string temp = "";
                for(int j = 0;j<part.size();j++){
                    temp += st.top();
                    st.pop();
                }
                reverse(temp.begin(),temp.end());
                if(temp != part){
                    for(int j = 0;j<part.size();j++){
                        st.push(temp[j]);
                    }
                }
            }

        }
        while(!st.empty()){
            ans+= st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};