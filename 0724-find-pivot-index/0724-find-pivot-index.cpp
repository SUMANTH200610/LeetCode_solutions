class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        vector<int>a(nums.size());
        a[0] = nums[0];
        for(int i = 1;i<nums.size();i++){
            a[i] = a[i-1]+nums[i];
        }
        for(int i = 0;i<nums.size();i++){
            if(i == 0){
                if(a[nums.size()-1]-a[0] == 0) return i;
            }
            else{
                if(a[nums.size()-1]-a[i] == a[i-1]) return i;
            }
        }
        return -1;
    }
};