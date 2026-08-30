class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        unordered_map<int,int>n;
        for(int i :nums){
            n[i]++;
        }
        for(auto i: n){
            if(i.second == 1) return i.first;
        }
        return 0;
    }
};