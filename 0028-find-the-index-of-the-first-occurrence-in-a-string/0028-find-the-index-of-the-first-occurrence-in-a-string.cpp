class Solution {
public:
    int strStr(string haystack, string needle) {
        int i = 0,j = 0;
        while(i <  haystack.size() && j < needle.size()){
            
            if(haystack[i] == needle[j]){
                i++;
                j++;
            }
            else if(haystack[i]!= needle[j]){
                i = i-j+1;
                j = 0;
            }
            if(j == needle.size()) {
                return i - j;
            }
           // else return -1;
        }
        return -1;
    }
};