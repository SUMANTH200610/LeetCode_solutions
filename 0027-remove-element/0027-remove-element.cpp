class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector<int>k;
        int c = 0;
        for(int i = 0;i<nums.size();i++){
            if(nums[i] != val) {
                k.push_back(nums[i]);
            }
    }
    for (int i : k) {
        nums[c++] = i;
    }
    return c;
}
};