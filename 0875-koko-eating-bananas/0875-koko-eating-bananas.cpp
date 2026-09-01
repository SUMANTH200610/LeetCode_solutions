class Solution {
public:
    int eatable(vector<int>piles,int h){
        int cnt = 0;
        for(int i = 0;i<piles.size();i++){
            if(piles[i]%h == 0) cnt += piles[i]/h;
            else {
              cnt += (piles[i]/h)+1;
                
            }
        }
        return cnt;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int maxi = 0,a = 0,mid = 0;
        for(int i:piles){
            maxi = max(maxi,i);
        }
        int low  = 1;
        int high = maxi;
        while(low<high){
            mid = (low+high)/2;
           // int cnt = 
            a = eatable(piles,mid);
          if(a <= h){
            high = mid;
          }
          else low = mid+1;
        }
        return high;
    }
};