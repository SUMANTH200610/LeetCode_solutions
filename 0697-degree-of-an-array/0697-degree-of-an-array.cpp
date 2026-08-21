class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {

        vector<int>a;
        unordered_map<int,int>m;
        unordered_map<int,int>first;
        int n = nums.size(),degree = 0;
        int length  = 0;
        for(int i = 0;i<n;i++){
            if(first.find(nums[i]) == m.end()){
                first[nums[i]] = i;
            }
            m[nums[i]]++;
            if(m[nums[i]] >degree){
                degree = m[nums[i]];
                length = i+1-first[nums[i]];
            }
            else if(m[nums[i]] == degree)
            length = min(length,i+1-first[nums[i]]);
        }
        return length;
    }
};