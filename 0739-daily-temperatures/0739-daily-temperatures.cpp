class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<int>s;
        s.push(0);
        vector<int>a(temperatures.size(),0);
        for(int i = 1;i<temperatures.size();i++){
            while(!s.empty() && temperatures[s.top()] < temperatures[i]){
                // s.pop();
                a[s.top()] = i-s.top();
                s.pop();
            }
            s.push(i);
        }
        return a;
    }
};