class Solution {
public:
    bool isArraySpecial(vector<int>& nums) {
        int c1 = 0,c = 0;
        for(int i = 0;i<nums.size();i++){
            if(nums[i] %2 == 0){

             c++;
             c1 =0;
             if(c == 2) return false;
            }
            else{
                c1++;
                c = 0;
                if(c1 == 2) return false;
            }

        }
        return true;
    }
};