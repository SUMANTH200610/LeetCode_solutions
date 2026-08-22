class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int mini =1, maxi = INT_MIN;
        int pro= 1;
        for(int i = 0;i<n;i++){
            pro *= nums[i];
            mini *=nums[i];
            int a = nums[i];
            int b = pro;
            int c = mini;
            pro = max({a,b,c});
            mini = min({a,b,c});
            maxi = max(maxi,pro);


        }
        return maxi;
    }
};