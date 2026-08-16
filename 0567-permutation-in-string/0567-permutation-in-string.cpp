class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        unordered_map<char,int>m;
        unordered_map<char,int>mp;
        int c = 0;
        for(int i:s1){
            m[i]++;
        }
        int n = s1.size();
        int mn = s2.size();
        if(n>mn) return false;
        for(int i = 0;i<s1.size();i++){
           // if(m[s2[i]] >0){
                //c++;
                mp[s2[i]]++;
                if(mp == m) return true;
            
        }
        int left = 0;
        for(int i = n;i<mn;i++){
            mp[s2[i]]++;
            mp[s2[left]]--;
            if(mp[s2[left]] == 0) mp.erase(s2[left]);
            left++;
            if(mp == m) return true;
        }


        // for(int i = n;i<mn;i++){
        //     if(m[s2[left]] <0){
        //     m[s2[left]]++;
        //     c--;
        //     left++;
        //     }
        //     else if(m[s2[i]] <= 0){
        //         c = 0;
        //     }
        //     else if(m[s2[i]] > 0){
        //       //  m[s2[i]]++;
        //         c++;
        //         if(c == n) return true;
        //     }

        // }
      return false;
    }
};