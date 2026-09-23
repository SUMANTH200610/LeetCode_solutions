class Solution {
public:
    string removeOccurrences(string s, string part) {
        stack<char>st;
        int siz= part.size();
        for(int i = 0;i<s.size();i++){
            
            st.push(s[i]);
            if(st.size()>= siz){
                string temp = "";
               for(int j = 0;j<siz;j++){
                temp+= st.top();
                st.pop();
               }
               reverse(temp.begin(), temp.end());
               if(temp != part){
                for(char c:temp){
                    st.push(c);
                }
               }
            }
        }
        string a;
        while(!st.empty()){
            a.push_back(st.top());
            st.pop();
        }
        reverse(a.begin(),a.end());
        return a;
    }
};