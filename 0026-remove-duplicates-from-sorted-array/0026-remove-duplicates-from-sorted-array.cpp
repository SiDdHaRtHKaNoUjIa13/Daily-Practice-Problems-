class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        int position = 0;
        int currValue = INT_MIN;
        for(int i =0; i<n;i++){
            if(currValue!=nums[i]){
                currValue = nums[i];
                nums[position] = currValue;
                position++;

            }
            else{
                continue;
            }
        }
        return position;

    }
};