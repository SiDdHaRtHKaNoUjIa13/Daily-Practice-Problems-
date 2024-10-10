class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int start =0;
        int end =0;
        int len =0;
        unordered_map<int,int>count;
        int n = nums.size();
        while(end<n){
            count[nums[end]]++;
            while(count[nums[end]]>k){
                count[nums[start]]--;
                start++;
            }
            len = max(len,end-start+1);
            end++;
        }
        return len;





    }
};