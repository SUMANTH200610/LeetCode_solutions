class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int low = 0;
        int high = nums.size()-1;
       int  mid = (low+high)/2;
        if(target == nums[mid]) return mid;
       if(target > nums[mid]){
        for(int i = mid+1;i<=high;i++){
            if(target == nums[i]) return i;
           else if(nums[i]>target) return i;
        }
          //  return nums.size();
        
    
       }
       else {
        for(int i = low;i<mid;i++){
            if(target == nums[i]) return i;
      else if (nums[i]>target) return i;
        }
       return mid;
       }
    return nums.size();
    }
};