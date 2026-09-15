class Solution {
public:
    string decodeString(string s) {
        stack<int> nums;
        stack<string>str;
        int num = 0;
        string current = "";

        for(int i = 0;i<s.size();i++){
            if(isdigit(s[i])){
                num = num*10+s[i]-'0';
            }
            else if(s[i] == '['){
                nums.push(num);
                num = 0;
                str.push(current);
                current = "";

            }
            else if(s[i] == ']'){
                int dupli = nums.top();
                nums.pop();
                string prev = str.top();
                str.pop();
               string temp = "";
                for(int i = 0;i<dupli;i++){
                    temp += current;
                }
                current = prev+temp;

            }
            else{
                current += s[i];
            }
        }
        return current;
    }
};