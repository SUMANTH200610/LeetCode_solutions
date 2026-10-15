class Solution {
public:
    int sumCounts(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;
     for(int i = 0;i<n;i++){
        unordered_map<int,int>m;
            int distinct = 0;
            for(int j = i;j<n;j++){
                m[nums[j]]++;
                if(m[nums[j]] == 1){
                    distinct++;
                }
                ans += distinct*distinct;
            }
     }
     return ans;
    }
};