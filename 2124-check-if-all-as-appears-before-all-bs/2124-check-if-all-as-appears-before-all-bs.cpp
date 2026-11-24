class Solution {
public:
    bool checkString(string s) {
        bool flag = false;
        int k = 0;
        for(int i = 0;i<s.size();i++){
            if(s[i] == 'b'){
                 flag = true;
                k = i;
                 break;
            }
            if(i == s.size()-1) return true;
        }
        //if(k )
            for(int i = k+1;i<s.size();i++){
                if(s[i] == 'a') return false;
            }
        
        return true;
    }
};