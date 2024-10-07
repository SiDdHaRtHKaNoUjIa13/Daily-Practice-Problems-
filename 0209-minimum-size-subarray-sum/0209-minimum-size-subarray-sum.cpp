class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int low =0;
        int high =0;
        int minWindowLength =INT_MAX;
        int currSum = 0;

        while(high<nums.size()){
            currSum += nums[high];
            high++;

            while(currSum>=target){
                int currWindowSize = high-low;
                minWindowLength = min(minWindowLength,currWindowSize);

                currSum = currSum-nums[low];
                low++;
            }

            
        }

        if(minWindowLength==INT_MAX){
            return 0;
        }
        else{
            return minWindowLength;
        }

        
    }
};