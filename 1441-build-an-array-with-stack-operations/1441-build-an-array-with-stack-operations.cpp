class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        stack<int>s;
        int i = 1;
        int j = 0;
        vector<string>ans;
        while(j<target.size()){
            s.push(i);
            ans.push_back("Push");
            if(i == target[j]){
                j++;
            }
            else{
                s.pop();
                ans.push_back("Pop");
            }
            i++;
        }
        return ans;
    }
};