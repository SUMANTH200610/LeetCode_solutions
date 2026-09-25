class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        // vector<vector<int>>a = matrix;
        unordered_map<int,int>m;
        vector<int>rows(matrix.size(),-1);
        vector<int>cols(matrix[0].size(),1);
        for(int i = 0;i<matrix.size();i++){
            for(int j = 0;j<matrix[i].size();j++){
                if(matrix[i][j] == 0){
                    rows[i] = 0;
                    cols[j] = 0;
                }
                //else m[i] = 1;
            }
        }
        
        
       
       
        for(int i = 0;i<matrix.size();i++){
            for(int j = 0;j<matrix[i].size();j++){
                if(matrix[i][j] == 0){
                    if(rows[i] == 0){
                    // matrix[i]  = 0;
                    // matrix[j] = 0;
                    for(int k = 0;k<matrix[i].size();k++){
                        matrix[i][k] = 0;

                    }
                    }
                    if(cols[j] == 0){
                    for(int l = 0;l<matrix.size();l++){
                     matrix[l][j] = 0;
                    }
                    }
                }
                //break;
            }
        }
        //return matrix;
        for(auto i:matrix){
            for(auto j:i){
                cout << j;
            }

        }
    }
};