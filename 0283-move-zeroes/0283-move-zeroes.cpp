class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        //  vector<int> output;
          //  sort(nums.begin(),nums.end());
        //     int cnt = 0;
        //     for(int i = 0;i<nums.size();i++){
        //         if(nums[i] == 0){
        //             cnt++;
        //         }
        //         else break;
        //     }
        //     int zeros = cnt,end = nums.size();
        //     for(int i = zeros;i<end;i++){
        //         .push_back(i);
        //     }
        //     for(int i = 0;i<zeros;i++){
        //         .push_back(i);
        //     }
        //    cout << nums;
        int j = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != 0) {
                nums[j] = nums[i];
                j++;
            }
        }
        for(int i = j; i < nums.size(); i++){
            nums[i] = 0;
        }
    //     for(int i: nums){
    //      cout << i;
    //     }
    //    // return 0;
    }
};
//temp = nums[i]
// nums[i] = nums[j]
//nums[j] = temp
//j++