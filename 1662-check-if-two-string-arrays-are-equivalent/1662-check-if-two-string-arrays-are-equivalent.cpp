class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& w1, vector<string>& w2) {
        string ww ="",ww1 = "";
        for(int i = 0;i<w1.size();i++){
            ww += w1[i];
        }
        for(int i = 0;i<w2.size();i++){
            ww1 += w2[i];
        }
        return ww == ww1;
    }
};