
class Solution {
public:
    int minOperations(string s) {
        string aes = s;
        sort(aes.begin(), aes.end());
        if (aes == s) return 0;
        int n = s.size();
        if (n == 2) return -1;
        if (s[0] == aes[0] || s[n - 1] == aes[n - 1])
            return 1;
        for (int i = 1; i < n - 1; i++) {
            if (s[i] == aes[0] || s[i] == aes[n - 1])
                return 2;
        }
        return 3;
    }
};
