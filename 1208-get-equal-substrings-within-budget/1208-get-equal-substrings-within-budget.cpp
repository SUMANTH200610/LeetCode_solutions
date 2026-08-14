class Solution {
public:
    int equalSubstring(string s, string t, int maxCost) {
       //if(maxCost == 0) return 1;
       int left = 0;
       int n = s.size();
       int maxi = 0;
       int cost = maxCost;
       for(int i = 0;i<n;i++){
            cost -= abs((s[i]-'a')- (t[i]-'a'));
            while(cost<0){
                    cost += abs(s[left]-t[left]);
                left++;
                
            }
            maxi = max(i-left+1,maxi);
       }
      // cout << 'i' -'a';
       return maxi;
    }
};