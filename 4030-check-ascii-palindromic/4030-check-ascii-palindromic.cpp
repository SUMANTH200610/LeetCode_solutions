class Solution {
public:
    bool isPalindromic(string s) {
        int i = 0,j = s.size()-1;
        string a,ori;
        while(i<=j) {
            int an = (int)s[i];
            a ="";
            int c = 0;
            while(c<8){
                a.push_back(an%2+'0');
                an/=2;
                c++;
                
            }
            reverse(a.begin(),a.end());
            ori+= a;
            i++;
            
        }
        int k = 0,l = ori.size()-1;
            while(k<=l){
                if(ori[k] != ori[l]) return false;
                k++;
                l--;
            }
            
        
      return true;
    }
};