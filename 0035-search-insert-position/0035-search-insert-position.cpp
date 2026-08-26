class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        unordered_map<int,int>m;
        for(int i: nums){
            m[i]++;
        }
        if(m.find(target) == m.end()){
            for(int i = 0;i<nums.size();i++){
                if(target< nums[i]){
                    target = nums[i];
                    break;
                }

            }
        }
        if(target > nums[nums.size()-1]) return nums.size();
            int low = 0;
            int high = nums.size()-1;
            while(low<= high){
                int mid = (low+high)/2;
                if(nums[mid] == target) return mid;
                else if(nums[mid]> target){
                    high = mid-1;

                }
                else low = mid+1;
            }
        
        return 0;
    }
};