class Solution {
public:
    int maxSubArray(vector<int>& nums) {

        // to find the aximum sum possible 
        int max_so_far =  nums[0];

        // to store the maximum found at a position 
        int curr_max = nums[0];

        for(int i = 1;i<nums.size();i++){

            curr_max = max(nums[i],nums[i]+curr_max);

            max_so_far = max(curr_max,max_so_far);


        }

        return max_so_far;


    }
};