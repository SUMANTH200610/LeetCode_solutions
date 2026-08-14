class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int left = 0;
        int n = nums.size();
        int c = 0;
        int maxi = 0;
        for(int i = 0;i<n;i++){
            if(nums[i] == 0) c--;
            while(c<0){
                if(nums[left] == 0) c++;
                left++;

            }
            maxi = max(maxi,i-left+1);
        }
        return maxi;
    }
};