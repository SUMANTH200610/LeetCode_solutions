class Solution {
public:
    vector<string> assignUmbrella(vector<int>& rain) {
        vector<string>a(rain.size());
        int alice = 0,bob = 0;
        for(int i = 0;i<rain.size();i++){
            if(i<rain.size()-1 && rain[i] == 1 && rain[i+1] == 0){
                bob++;
                a[i]= "Bob";
            }
          
            else if(i<rain.size()-1 &&rain[i] && rain[i+1] == 1){
                if(alice == bob) {
                    alice++;
                    a[i] = "Alice";
                }
                else{
                    if(bob<alice) {
                        bob++;
                        a[i] = "Bob";
                    }
                    else {
                        alice++;
                        a[i] = "Alice";
                    }
                }
            }
              else if(rain[i] == 1){
                a[i] = "Bob";
            }
            else{
                a[i] = "None";
            }
        }

        return a;
    }
};