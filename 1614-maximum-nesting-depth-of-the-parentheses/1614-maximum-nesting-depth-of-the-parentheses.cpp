class Solution {
public:
    int maxDepth(string s) {
        stack<char>st;
        int maxi = 0;
        for(int i :s){
            if(i == '('){
                st.push(i);
                maxi = max(maxi,(int)st.size());
            }
            else if(i == ')') st.pop();
        }
        return maxi;
    }
};