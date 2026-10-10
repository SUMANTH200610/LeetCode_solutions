class Solution {
public:
    vector<vector<int>> generate(int nums) {
        vector<vector<int>>generat;
        
        for(int i = 0;i<nums;i++){
            int sum = 1;
            vector<int>a;
            for(int j = 0;j<=i;j++){
                if(j == 0) a.push_back(1);
                else if(j == i) a.push_back(1);
                else {
                    sum = generat[i-1][j] + generat[i-1][j-1];
                    a.push_back(sum);
                }
                
            }
            generat.push_back(a);
        }
        return generat;
    }
};