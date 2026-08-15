class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        unordered_map<int,int>m;
        for(int i = 0;i<nums.size();i++){
            m[nums[i]]++;
        }
        int maxi = INT_MAX;
        for(int i = 1;i<maxi;i++){
            if(m.find(i) == m.end()) return i; 
        }
        return 0;
    }
};