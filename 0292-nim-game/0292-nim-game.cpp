class Solution {
public:
    bool canWinNim(int n) {
       if(n%4 == 0) return false;
       else return true;
    }
};
// 1 1 3 1 1 3
// 1 1 3 1
// 3 3
// 2 
//1 1 2 1 