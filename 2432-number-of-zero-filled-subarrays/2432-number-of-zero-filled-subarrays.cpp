class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long int count =0;
        long long int total =0;
        for(int i =0;i<nums.size();i++){
            if(nums[i]==0){
                count++;
            }
            else{
                count=0;
            }
            total = total+count;


        }
        return total;
    }
};