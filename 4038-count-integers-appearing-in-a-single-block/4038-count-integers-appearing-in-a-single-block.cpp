class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
      unordered_map<int,int>m;
        int c= 0;
        m[nums[0]]++;
        for(int i = 1;i<nums.size();i++){
            if(nums[i] != nums[i-1]){
                m[nums[i]]++;
            }
        }
            for(auto i : m){
                if(i.second == 1) c++;
            }
        
        return c;
    }
};