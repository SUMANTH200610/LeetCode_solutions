class Solution {
public:
    bool checkDivisibility(int n) {
        long long pro= 1;
        int nn = n;
        int sum = 0;
        while(n){
            int digit = n%10;
            pro *= digit;
            sum+= digit;
            n/=10;
        }
        return nn%(pro+sum) == 0;
    }
};