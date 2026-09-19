class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        stack<int>st;
        vector<int>a = prices;
        st.push(0);
        for(int i = 1;i<prices.size();i++){
            while(!st.empty() && prices[st.top()]>= prices[i]){
                a[st.top()] = prices[st.top()]-prices[i];
                st.pop();
            }
            st.push(i);
        }
        int n = prices.size();
        // for(int i = n-1;i>=0;i--){
        //     if(!st.empty()){
        //         if(a[i] == -1) a[i] = prices[st.top()];
        //         st.pop();
        //     }
        //     if(st.empty()) break;
        // }
        return a;
    }
};