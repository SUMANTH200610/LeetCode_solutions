class Solution {
public:
    int nearestDrone(vector<vector<int>>& drones, vector<int>& target) {
        int mini = INT_MAX;
        int ans = -1;
        for(int i = 0;i<drones.size();i++){
           int first = drones[i][0];
            int second = drones[i][1];
            if(mini>(abs(first-target[0]) + abs(second-target[1])) && abs(first-target[0]) + abs(second-target[1]) <= drones[i][2]){
                ans = i;
                mini = (abs(first-target[0]) + abs(second-target[1]));
            }
            
        }
        return ans;
    }
};