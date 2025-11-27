class Solution {
public:
    int Choices(string s , int index, vector<int>&dp ){
        if(index==s.size()){
            return 1; //only one character left and we have no choice except taing it 

        }
        if(dp[index] != -1){
            return dp[index]; // if subproblem is solved earlier 
        }

        int res = 0;
        // solving for single character 
        if(s[index]!='0'){
            res+=Choices(s,index+1,dp);
        }

        // solving for double character

        if(index+1<s.size() && (s[index]=='1' || s[index]=='2' && s[index+1]<='6')) {
            res+=Choices(s,index+2,dp);
        }

        return dp[index]= res;

    }
    int numDecodings(string s) {
        int n = s.size();
        vector<int>dp(n+1,-1);
        return Choices(s,0,dp);
    }
};