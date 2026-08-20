class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        int n = nums.size();
        vector<int>a;
        vector<int>num;

        // for(int i = 0;i<n;i++){

        // }
        int i = 0,j = 0,k = 2;
        a.push_back(nums[0]);
        num.push_back(nums[1]);
        while(k<n){
            if(a[i] > num[j]){
                a.push_back(nums[k]);
                k++;
                i++;
            }
            else{
                num.push_back(nums[k]);
                k++;
                j++;
            }
        }
        for(int i = 0;i<num.size();i++){
            a.push_back(num[i]);
        }
        return a;
    }
};