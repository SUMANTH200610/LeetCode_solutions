class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        unordered_map<char,int>m;
        int right = 0,left = 0,maxi = 0;
        for(int i = 0;i<s.size();i++){
            m[s[i]]++;
            if(m[s[i]] != 1){
                while(m[s[i]] != 1){
                    m[s[left]]--;
                    left++;
                }

            }
            maxi = max(maxi,right-left+1);
            right++;
        }
        return maxi;

    }
};