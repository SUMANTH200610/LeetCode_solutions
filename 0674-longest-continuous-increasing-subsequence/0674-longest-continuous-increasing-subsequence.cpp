class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int c = 1,m =1;
        for(int i = 0;i<nums.size()-1;i++){
            if(nums[i] < nums[i+1]){
                 c++;
                 m = max(m,c);
            }
            else c = 1;
        }
        return m;
    }
};