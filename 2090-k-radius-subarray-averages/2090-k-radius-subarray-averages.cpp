class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int>a(n,-1);
        long long sum = 0;
        if(2*k+1 > n) return a;
        for(int i = 0;i<=2*k;i++){
            sum+= nums[i];
        }
        a[k] = sum/(2*k+1);
        int j = 0;
        for(int i = k+1;i<n-k;i++){
            sum += nums[i+k];
            sum -= nums[i-k-1];
            j++;
            a[i] = sum/(2*k+1);
        }
        return a;
    }
};