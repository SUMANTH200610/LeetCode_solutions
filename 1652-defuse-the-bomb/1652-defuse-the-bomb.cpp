class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        vector<int>a(code.size(),0);
        int n= code.size();
        if(k == 0) return a;
        int sum = 0;
        if(k>0){
            sum =0;
            for(int i  = 1;i<=k;i++){
                sum+= code[i];
            }
            a[0] = sum;
            for(int i = 1;i<n;i++){
                sum -= code[i%n];
                sum += code[(i+k)%n];
                a[i] = sum;
            }
        }
        if(k<0){
            for(int i = 1;i<=-k;i++){
                sum+= code[n-i];
            }
            a[0] = sum;
            for(int i = 1;i<n;i++){
                sum -= code[(n+k+i-1)%n];
                sum += code[i-1];
                a[i] = sum;
            }
        }
        return a;
       // return {};
    }
};