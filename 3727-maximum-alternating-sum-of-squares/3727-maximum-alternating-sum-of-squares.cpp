class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        // long long sum = 0;
        // for(int &i : nums){
        // i = i*i;
        // }
        // sort(nums.begin(),nums.end(),greater<>());
        // int j = nums.size()-1;
        // for(int i = 0;i<nums.size();i++){


        //     if(i %2 != 0){
        //         swap(nums[i],nums[j]);
        //         j--;
        //         sum -= nums[i]*nums[i];
        //     }
        //     else{ 
        //         // if(i!= 0 && nums[i] < nums[j+1]) sum += nums[j+1]*nums[j+1];
        //          sum += nums[i]*nums[i];
        //     }

        // }
        // return sum;
        vector<int>high,low;
        long long sum = 0;
        int n = nums.size();
        if(nums.size() %2 != 0){
            // vector<int>high((n/2)+1);
            // vector<int>low(n/2);
            high.resize((n + 1) / 2);
            low.resize(n / 2);
        }
        else {
            high.resize(n / 2);
            low.resize(n / 2);
        }
         for(int &i : nums){
        if(i<0) i = -i;
        }
        sort(nums.begin(),nums.end(),greater<>());
        int m = high.size();
        int mn = low.size();
        for(int i = 0;i<m;i++){
            high[i] = nums[i];
        }
        for(int i = 0;i<mn;i++){
            low[i] = nums[i+m];
        }
        int j = 0,ii = 0;
        for(int i = 0;i<n;i++){
            if(i%2 == 0){ sum += high[ii]*high[ii];
            ii++;
            }
            else{

             sum -= low[j]*low[j];
             j++;
            }
        }
        return sum;

    }
};