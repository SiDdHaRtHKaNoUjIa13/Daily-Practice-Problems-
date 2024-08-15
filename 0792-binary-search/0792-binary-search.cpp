class Solution {
public:
    int search(vector<int>& nums, int target) {
        
        int n = nums.size()-1;
        int s = 0;
        int e = n;
        
        while(s<=e){
            int mid = s+(e-s)/2;
            if(nums[mid] == target){
                return mid;

            }
            else if(target <nums[mid]){
                e= mid-1;
            }
            else if(target > nums[mid]){
                s = mid+1;
            }
        }
        return -1;
        
    }
};