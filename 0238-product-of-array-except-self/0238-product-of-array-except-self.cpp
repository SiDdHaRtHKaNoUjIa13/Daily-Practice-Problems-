class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();

        // vector to strore all left multiplication 
        vector<int>left (n,1);

        // vetor to store all right multiplication
        vector<int>right(n,1);

        for(int i = 1;i<n;i++){
            left[i] = left[i-1]* nums[i-1];
        }
        for(int i = n-2;i>=0;i--){
            right[i] = right[i+1]* nums[i+1];
        }

        vector<int>ans(n);
        for(int i =0;i<n;i++){
            ans[i] = left[i]*right[i];
        }
        return ans;
    }

};