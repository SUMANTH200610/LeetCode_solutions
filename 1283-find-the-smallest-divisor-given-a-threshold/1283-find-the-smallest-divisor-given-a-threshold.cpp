class Solution {
public:
    int inrange(vector<int>nums,int h){
        int cnt = 0;
        for(int i = 0;i<nums.size();i++){
            if(nums[i]%h == 0) cnt += nums[i]/h;
            else {
              cnt += (nums[i]/h)+1;
                
            }
        }
        return cnt;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int maxi = 0,a = 0,mid = 0;
        for(int i:nums){
            maxi = max(maxi,i);
        }
        int low  = 1;
        int high = maxi;
        while(low<high){
            mid = (low+high)/2;
           // int cnt = 
            a = inrange(nums,mid);
          if(a <= threshold){
            high = mid;
          }
          else low = mid+1;
        }
        return high;
    }
};