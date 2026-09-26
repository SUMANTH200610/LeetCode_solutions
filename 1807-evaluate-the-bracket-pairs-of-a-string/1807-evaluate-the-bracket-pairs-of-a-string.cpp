class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        unordered_map<string,string>m;
        for(auto st : knowledge){
          m[st[0]] = st[1];
        }
        string st = "";
        string temp;
        bool brac = false;
        for(int i = 0;i<s.size();i++){
            if(s[i] == '('){
                brac = true;
                 temp ="";
            }
            if(s[i] == ')'){
                brac = false;
                // st.push_back(temp);
                if(m.find(temp) != m.end()){
                st+= m[temp];
                }
                else{
                    st.push_back('?');
                }

            }
            if(brac == true && s[i] !='(' && s[i] !=')'){
                temp.push_back(s[i]);
            }
            else if(s[i] != ')' && s[i] != '('){
                st.push_back(s[i]);
            }
        }
        return st;
    }
};