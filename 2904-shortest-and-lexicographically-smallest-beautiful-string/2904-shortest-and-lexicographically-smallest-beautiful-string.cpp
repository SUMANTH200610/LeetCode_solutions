class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        int left = 0,c = 0,c1 = 0,lefty = 0;
        int mini = INT_MAX;
        string a;
        unordered_map<char,int>m;
        for(char i:s){
            m[i]++;
            if(i == '1') c1++;
        }
        if(m.find('1') == m.end() || c1<k) return "";


        for(int i = 0;i<s.size();i++){
            if(s[i] == '1'){
                c++;
           // mini = min(mini,i-left+1);
        //    if(mini > i-left+1){
        //         lefty = left;
        //         mini = i-left+1;
        //  }

           }
            if(k == c){
                string candidate = s.substr(left,i-left+1);
                if(mini > i-left+1){
                    mini = i-left+1;
                   // newmin = mini;
            // mini = min(mini,i-left+1);
             lefty = left;
                }
               // stirng current = s.substr(left,i=l)
               else if(mini == i-left+1 && candidate<s.substr(lefty,mini)){
                lefty = left;

               }
            }
            while(c>=k){
                string candidate = s.substr(left, i-left+1);
                if(s[left] == '1'){
                    c--;
                  //  left++;
                    
                }
                left++;
                //mini = min(mini,i-left+1);
                if(mini> i-left+2){
                    lefty = left-1;
                    mini = i-left+2;
                  //  newmin = mini;
                    //newmin = mini;
                }
             //   if(mini == newmin ){
                    else if(i-left+2 == mini && candidate < s.substr(lefty, mini)){
        lefty = left - 1;
    }
                }
            }
        
        for(int i = lefty;i<lefty+mini;i++){
            a.push_back(s[i]);
        }
        return a;
      //  return "";
    }
};