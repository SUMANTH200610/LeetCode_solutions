class Solution {
public:
    vector<int> corpFlightBookings(vector<vector<int>>& bookings, int n) {
        vector<int>diff(n+1);
        vector<int>prefix(n);
        // for(int i:bookings){
        //     int l = i[0];
        //     int r = i[1];
        //     int val = i[2];

        // }
        for(int i = 0;i<bookings.size();i++){
            diff[bookings[i][0]-1] += bookings[i][2];
            diff[bookings[i][1]] -= bookings[i][2];
        }
        prefix[0] = diff[0];
        for(int i = 1;i< n;i++){
            prefix[i] += prefix[i-1]+diff[i];
        }
        // for(int i = 0;i<bookings.size();i++){
        //     prefix[i] += bookings[i][2];
        // }
        return prefix;

    }
};