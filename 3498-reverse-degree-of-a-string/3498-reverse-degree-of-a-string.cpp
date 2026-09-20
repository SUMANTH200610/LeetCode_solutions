class Solution {
public:
    int reverseDegree(string s) {
        int value=0,sum = 0;
        for(int i = 0;i<s.size();i++){
            value = ('z'-s[i]+1);
            sum = sum + ((i+1)*value);
            value = 0;
        }
        return sum;
    }
};