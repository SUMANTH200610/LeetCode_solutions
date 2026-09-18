class Solution {
public:
    int maxDepth(string s) {
        stack<char>st;
        int c=  0,maxi = 0;
        for(int i = 0;i<s.size();i++){
            if(s[i] == '('){

                st.push(s[i]);
                c++;
            }
            if(s[i] == ')'){
                maxi = max(maxi,c);
                c--;
                st.pop();
                
                
               // if(st.empty()) c = 0;
                
            }
            
            
        }
        return maxi;
    }
};