class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        vector<int>a = nums;
        int n = nums.size();
        sort(a.begin(),a.end());

        
        if(a == nums) return 0;
        int l  =0,r = 0;
        for(int i = 0;i<n;i++){
            if(a[i] != nums[i]) {
                    l = i;
                    break;
            }
        }
        for(int i = n-1;i>=0;i--){
            if(a[i] != nums[i]){
                r = i;
                break;
            }
        }
        
        return r-l+1;
    }
};