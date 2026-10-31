class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        vector<vector<int>> result;
        int freq[201] = {0};

        for (int num : nums) {
            int count = freq[num];

            if (count == result.size()) {
                result.push_back(vector<int>());
            }

            result[count].push_back(num);
            freq[num]++;
        }

        return result;
    }
};