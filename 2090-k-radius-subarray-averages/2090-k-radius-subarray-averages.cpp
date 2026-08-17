class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        int n = nums.size();
    vector<int>a(n);
    int lefty = 0,left = 0;
    long long sum = 0;
    for(int i = k;i<n;i++){
        if(k+k < n){
      //  if((i-k> i+k-left)) break;
        if (i-k == i+k-left){
            sum += nums[i-k];
            break;
        }
        sum += nums[i-k]+nums[i+k-left];
        cout << sum << " ";
        left += 2;
    }
    else break;
    }
    cout << sum << endl;
    
    for(int i = 0;i<n;i++){
        if(i-k <0 || i+k>= n) a[i] = -1;
        else{
            int avg = sum/(i+k-lefty+1);
            cout << avg << endl;
            a[i] = avg;
            sum -= nums[lefty];
            lefty++;
           if(i+k+1 < n) sum += nums[i+k+1];

        }
    }
    return a;
 //   return {};
    
    }
};