class Solution {
public:
    int findLength(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size(); int n = nums2.size();

        // memoiation matrix
        vector<vector<int>> dp(m + 1, vector<int>(n + 1, 0));

        int ans = 0;

        // iterate over each postion 
        for(int i = 1;i<=m;i++){
            for(int j =1;j<=n;j++){

                // if numbers are equal 
                if(nums1[i-1]==nums2[j-1]){
                    // get the number from diagonally opposte 


                    dp[i][j] = dp[i-1][j-1] + 1;

                    ans = max(dp[i][j],ans);


                }
            }
        }
        return ans;
        
    }
};