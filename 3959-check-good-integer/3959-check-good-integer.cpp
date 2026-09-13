class Solution {
public:
    bool checkGoodInteger(int n) {
       int sum,squaresum = 0;
       while(n){
       int rem = n%10;
       sum+= rem;
       squaresum += rem*rem;
       n /= 10;
       }
       return (squaresum-sum)>=50;

    }
};