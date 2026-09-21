class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        unordered_map<int,int>a;
        for(int i : target){
            a[i]++;
        }
        int mini = 1;
        int maxi = *max_element(target.begin(),target.end());
    stack<int>s;
    vector<string>st;
        for(int i = mini;i<=maxi;i++){
            if(a.find(i) != a.end()){
                s.push(i);
                st.push_back("Push");
            }
            else{
                st.push_back("Push");
                st.push_back("Pop");
            }
        }
        return st;
    }
};