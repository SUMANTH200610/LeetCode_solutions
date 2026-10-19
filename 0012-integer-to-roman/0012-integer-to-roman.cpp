class Solution {
public:
    string intToRoman(int num) {
        string str;
        while(num>=1){
            if(num >= 1000){
             str.push_back('M');

                num -= 1000;
            }
            else if(num >= 500){
                if(num >=900) {
                     str+= "CM";
                    num -= (num/100)*100;
                }
                else{

                 str.push_back('D');
                 num -= 500;
                }
                
            }
             else if(num >= 100){
                  if(num >=400) {
                     str+= "CD";
                    num -= (num/100)*100;
                  }
               else {
                str.push_back('C');
                num -= 100;
               }
                
            }
             else if(num >= 50){
                if(num >=90) {
                    str+= "XC";
                    num -= (num/10)*10;
                }
                else {
                    str.push_back('L');
                    num -= 50;
                }
                
            }
             else if(num >= 10){
                if(num >=40) {
                    str+= "XL";
                    num -= (num/10)*10;
                }
                else {
                    str.push_back('X');
                    num-=10;
                }
               
            }
             else if(num >= 5){
                if(num == 9){
                    str+= "IX";
                    num -= 9;
                }
                else{
                    str.push_back('V');
                num -= 5;
                }
            }
            else{
                  if(num == 4){
                    str+= "IV";
                    num -= 4;
                }
                else{
                    str.push_back('I');
                num -= 1;
                }
            }


        }
        return str;
    }
};