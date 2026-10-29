class Solution {
public:
    int peakValleyDifference(vector<int>& nums) {
        int peak = 0,valley = 0;
        for(int i = 1;i<nums.size()-1;i++){
            if(nums[i] > nums[i-1] && nums[i]>nums[i+1]) {
                peak+=nums[i];
                cout << peak << endl;
            }
            else if(nums[i] < nums[i-1] && nums[i]<nums[i+1]) {
                valley+=nums[i];
               // cout << valley << endl;
            }
        }
        return peak-valley;
    }
};