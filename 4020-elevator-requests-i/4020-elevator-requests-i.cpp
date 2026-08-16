class Solution {
public:
    int elevatorRequests(int n, vector<int>& requests) {
        int present = 0,sum = 0;
        for(int i = 0;i<requests.size();i++){
            sum += abs(present-requests[i]);
            present = requests[i];
        }

        return sum;
    }
};