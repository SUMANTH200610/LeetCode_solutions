class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>m;
        m[0]++;
        int c= 0;
        vector<int>a(nums.size()+1);
        a[0] = 0;
        for(int i = 0;i<nums.size();i++){
                a[i+1] += a[i]+nums[i];
                
                if(m.find(a[i+1]-k) != m.end()) c+= m[a[i+1]-k];
                m[a[i+1]]++;
        }
        return c;
    }
};