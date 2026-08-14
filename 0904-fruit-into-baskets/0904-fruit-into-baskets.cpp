class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int left = 0;
        unordered_map<int,int>m;
        int n = fruits.size();
        int maxi = 0;
        for(int i = 0;i<n;i++){
            m[fruits[i]]++;
            while(m.size()>2){
                m[fruits[left]]--;
                if(m[fruits[left]] == 0) m.erase(fruits[left]);
                left++;
            
            }
            maxi = max(maxi,i-left+1);
        }
        return maxi;
    }
};