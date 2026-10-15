class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        unordered_map<int,int>m;
        for(int i : nums){
            m[i]++;
        }
        while(m.find(original) != m.end()){
            original*= 2;
        }
        return original;
    }
};