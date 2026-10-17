class Solution {
public:
    int maxArea(vector<int>& height) {
        int size = height.size();
        int j = size-1;
        int ii = 0;
        int maxi = INT_MIN;
        for(int i = 0;i<height.size();i++){
            int val = min(height[ii],height[j])*(j-ii);
            if(height[ii]<height[j]){
                ii++;
            }
            else j--;
            maxi = max(maxi,val);
        }
        return maxi;
    }
};