class Solution {
public:
    string addStrings(string num1, string num2) {
    

        int i= num1.length()-1;
        int j= num2.length()-1;
        int carry =0;
        string ans;

        while(i>=0 || j>=0|| carry>0){

            if(i>=0){
                carry = carry + num1[i] -'0';
                i--;
            }
            if(j>=0){
                carry = carry + num2[j]-'0';
                j--;
            }

            ans = ans + char(carry%10+'0');
            carry= carry/10;
        }
        reverse(ans.begin(),ans.end());
        return ans;

    }
};