class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        unordered_map<int,int>a;
      int  maxm = 0;
        for(int i = 0;i<nums.size();i++){
            a[nums[i]]++;
            maxm = max(maxm,nums[i]);
        }
        int n = nums.size();
        if(n == k){
           if( a.size() == 1)
            return nums[0];
        }
      if (n == k){

      return maxm;
      }
      maxm = -1;
    if(k == 1){
        for(int i = 0;i<n;i++){
            if(a[nums[i]] == 1){
                maxm = max(maxm,nums[i]);
            }
        }
        return maxm;
    }

        
        int maxi = -1 ;
        for(int i = 0;i<nums.size();i++){
            if(i == 0 || i == nums.size()-1){
                if(a[nums[i]] == 1) maxi = max(maxi,nums[i]);
            }
        }
        return maxi;
    }
};