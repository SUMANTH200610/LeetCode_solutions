class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        int mini = INT_MAX;
        int val = 0;
        for(int j = 0;j<k;j++){
        for(int  i = 0;i<nums.size();i++){
                if(nums[i] <mini){
                    mini = nums[i];
                    val = i;

                }
           

        }
        nums[val] = nums[val]*multiplier;
        mini = INT_MAX;
        }
        return nums;
    }
};