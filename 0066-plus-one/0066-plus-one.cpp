class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int>a(digits.size()+1);
    //     long long ans = 0;
    int cnt = 0;
    for(int i = 0;i<digits.size();i++){
    if(digits[i] == 9) cnt++;
    }
    // ans += 1;
    // while(ans){
    //     int rem = ans%10;
    // a.push_back(rem);
    // ans /= 10;
    // }
    // reverse(a.begin(),a.end());
    // return a;
int n = digits.size();
    if(cnt == n){
        for(int i = 0;i<=n;i++){
            if(i == 0) a[i] = 1;
            else a[i]  = 0;
        }
        return a;
    }
    if(digits[n-1] <= 8){

     digits[n-1]+= 1; 
     return digits;
    }
    bool val = true;
    for(int i = n-1;i>=0;i--){
        if(digits[i] != 9){
            digits[i] += 1;
            return digits;


        }
        else digits[i] = 0;

    }
    return {};

    }
};