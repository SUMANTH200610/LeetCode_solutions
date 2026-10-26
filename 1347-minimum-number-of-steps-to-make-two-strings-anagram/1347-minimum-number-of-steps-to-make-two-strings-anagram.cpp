class Solution {
public:
    int minSteps(string s, string t) {
        unordered_map<char,int>m;
        int d = 0;
        for(char i:s){
            m[i]++;
        }
        for(char i:t){
            if(m.find(i) != m.end()){
               m[i]--;
               if(m[i] != 0) continue;
               else m.erase(i);
            }
            else d++;
        }
        return d;
    }
};