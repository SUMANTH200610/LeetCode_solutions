class Solution {
public:
    int minOperations(vector<string>& logs) {
       int c = 0;
       stack<string>s;
       for(int i = 0;i<logs.size();i++){
        if(logs[i] == "../"){
            if(!s.empty()){
                s.pop();
            }
        }
        else if(logs[i] == "./") continue;
        else s.push(logs[i]);
       } 
       while(!s.empty()){
        c++;
        s.pop();
       }
       return c;
    }
};