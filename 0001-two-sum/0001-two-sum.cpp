class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> m;
        int ans;
        vector<int> arr;
        for(int i = 0;i<nums.size();i++){
            ans = target - nums[i];
            if(m.find(ans) != m.end()){
            arr.push_back(i);
            arr.push_back(m[ans]);
            }
            m[nums[i]] = i;
        }
        return arr;
    }
};