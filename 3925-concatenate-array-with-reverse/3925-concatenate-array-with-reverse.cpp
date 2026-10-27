class Solution {
public:
    vector<int> concatWithReverse(vector<int>& nums) {
        vector<int>num = nums;
     nums.resize(nums.size()+nums.size());

     reverse(num.begin(),num.end());
     for(int i = num.size();i<num.size()*2;i++){
        nums[i] = num[i - num.size()];
     }
     return nums;
    }
};