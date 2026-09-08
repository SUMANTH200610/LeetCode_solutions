class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int>st;
        int sum = 0;
        int prevtop = 0;
        for(int i = 0;i<operations.size();i++){
            if(operations[i] != "C" && operations[i] != "D" && operations[i] != "+"){
                st.push(stoi(operations[i]));
                 prevtop = st.top();
                 sum += prevtop;
            }
           
            
            else if(operations[i] == "C"){
                st.pop();
                sum -= prevtop;
                if(st.empty()) prevtop = 0;
               else  prevtop = st.top();
            }
            else if(operations[i] == "+"){
                st.pop();
                int a = st.top();
                st.push(prevtop);
                st.push(a + prevtop);
                prevtop = st.top();
                sum+= prevtop;
            }
            else if(operations[i] == "D"){
                st.push(2*prevtop);
                prevtop = st.top();
                sum+= prevtop;
            }
        }
        return sum;
    }
};