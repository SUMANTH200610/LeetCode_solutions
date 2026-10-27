class Solution {
public:
    string interpret(string command) {
        string s = "";
int flag = 0;
for(int i = 0;i<command.size();i++){
    if(command[i] == '(') {
        flag = 1;
        continue;
    }
    else if(command[i] == ')'){
   // flag--;
    if(flag == 1) s.push_back('o');
    }
    else{
        flag = 0;
        s+= command[i];
    }
}
return s;
    }
};