class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int nm = gain.size();
        //vector<int>n(nm+1);
     //   n[0] = 0;
        int ans = 0;
        int alt = 0;
    for(int i : gain){
        alt += i;
        ans = max(ans,alt);
    }
    return ans;
    }
};