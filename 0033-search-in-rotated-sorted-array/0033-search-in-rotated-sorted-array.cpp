class Solution {
public:
    int search(vector<int>& nums, int target) {
        unordered_map<int,int>m;
        int left = 0;
        for(int i:nums){
            m[i] = left;
            left++;
        }
        sort(nums.begin(),nums.end());
        int low = 0;
        int high = nums.size()-1;
        while(low<=high){
            int mid = (low+high)/2;
            if(nums[mid] == target) return m[nums[mid]];
            else if (nums[mid] > target) high = mid-1;
            else low = mid+1;
        }
        return -1;
    }
};