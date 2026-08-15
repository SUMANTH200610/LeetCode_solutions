class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        vector<vector<int>>m = matrix;
        int n = matrix.size();
        for(int i = 0;i<matrix.size();i++){
            for(int j = 0;j<matrix[i].size();j++){
                m[i][j] = matrix[n-j-1][i];
            }
        }
        matrix = m;
    }
};