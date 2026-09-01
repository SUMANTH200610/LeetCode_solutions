class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int i = 0,j = nums.size();
        vector<int>a(j);
        a[0] = nums[0];
        for(int i = 1;i<j;i++){
            a[i] = a[i-1]+nums[i];
        }if(j == 1) return 0;
        int first = 0,last = 0;
        while(i<j){
            if(i == 0 && (a[j-1]-a[i]) == first) {
                return i;
            }
          //  if(i == nums.size()-1 && a[j-2] == last) return i;
            if(i == nums.size()-1 && a[j-2] != last) return -1;
            cout << "About to access a[" << i + 1 << "]" << endl;
            if(a[i] == a[j-1]-a[i+1]) return i+1;
            else i++;
        }
        return -1;
    }
};