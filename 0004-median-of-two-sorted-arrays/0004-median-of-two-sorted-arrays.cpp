class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int>a;
        for(int i = 0;i<nums1.size();i++){
            a.push_back(nums1[i]);
        }
        for(int i = 0;i<nums2.size();i++){
            a.push_back(nums2[i]);
        }
        sort(a.begin(),a.end());
        if(a.size() %2 != 0) return (double)a[a.size()/2];
        else return (double)((a[(a.size()/2)] + a[(a.size()/2)-1])/2.0);
        
        //return 0.0;

    }
};