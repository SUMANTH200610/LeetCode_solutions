class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int>m;
        stack<int>st;
        int n = nums1.size();
        int ma = nums2.size();
        vector<int>a(n);
        st.push(nums2[0]);
        for(int i = 1;i<nums2.size();i++){
            while(!st.empty() && nums2[i] > st.top()){
                m[st.top()] = nums2[i];
                st.pop();
            }
            st.push(nums2[i]);
           
            
        }
         while(!st.empty()){
                m[st.top()] = -1;
                st.pop();
            }
        for(int i = 0;i<n;i++){
            nums1[i] = m[nums1[i]];
        }
        return nums1;
    }
};