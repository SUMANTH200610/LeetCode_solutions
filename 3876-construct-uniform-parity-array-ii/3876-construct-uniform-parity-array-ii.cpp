class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        sort(nums1.begin(),nums1.end());
        int small = nums1[0];
        string val = "";
        if(small %2 == 0) val = "even";
        else val =  "odd";
        if(val == "even"){
            for(int i = 1;i<nums1.size();i++){
                if(nums1[i] %2 == 1) return false;
            }
        }
        return true;
    }
};