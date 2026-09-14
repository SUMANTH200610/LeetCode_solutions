class Solution {
public:
    string decodeString(string s) {
        //vector<char>a;
        stack<int>st;
        stack<string>sta;
        int num = 0;
        string current = "";

        for(int i = 0;i<s.size();i++){
         if(isdigit(s[i])){
            num = num*10 + s[i]-'0';
         }
         else if(s[i] == '['){
           st.push(num);
           sta.push(current);
           num = 0;
           current = "";

         }
         else if(s[i] == ']'){
            int repeat = st.top();
            st.pop();
            string prev = sta.top();
            sta.pop();
            string temp = "";
            for(int i = 0;i<repeat;i++){
                temp += current;
            }
            current = prev+temp;
         }
         
          else{
             current+= s[i];

         }
          }
        
        return current;
    }
};