class Solution {
public:
    int countDigitOccurrences(vector<int>& nums, int digit) {
        int c=0;
         for(int i = 0;i<nums.size();i++){
            while(nums[i]){
                //num.push_back(nums[i]%10);
                if(nums[i]%10 == digit) c++;
                nums[i] /= 10;
            }

        }
        return c;
    }
};