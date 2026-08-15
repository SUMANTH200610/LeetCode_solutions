class Solution {
public:
    int characterReplacement(string s, int k) {
        int left = 0;
        int maxi = 0;
        int maxf = 0;
        unordered_map<char,int>m;
        for(int i = 0;i<s.size();i++){
            m[s[i]]++;
            maxf = max(maxf,m[s[i]]);

            while(i-left - maxf + 1 > k){
                m[s[left]]--;
                left++;
            }
            maxi = max(maxi,i-left+1);
        }
        return maxi;
    }
};