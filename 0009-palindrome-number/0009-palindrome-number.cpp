class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        long long rem = 0,a = x;
        while(x){
            rem  = rem*10 + x%10; // 0+ 1   //1*10+2  // 12*10 
            x /= 10;
        }
        return (rem == a);
    }
};