class Solution {
public:
    int reverse(int x) {
        
        long long temp = x;
        long long y = x;
        long long val = 0;
        while(temp){
            int rem = temp%10;
            val = val*10 + rem;
            temp /= 10;

        }
      //  if(y<0) val = -val;
      if(val > INT_MAX || val < INT_MIN) return 0;
        return val;
    }
};