class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
     stack<int>st;
     vector<int>arr(temperatures.size(),0);
     int n = temperatures.size();
     int c = 0;
     st.push(0);
     for(int i = 1;i<n;i++){
      //  c++;
        while(!st.empty() && temperatures[st.top()]<temperatures[i]){
            int prev = st.top();
            st.pop();
            arr[prev] = i-prev;
            


        }
        st.push(i);
     }
     return arr;
  //  return {};
    }
};