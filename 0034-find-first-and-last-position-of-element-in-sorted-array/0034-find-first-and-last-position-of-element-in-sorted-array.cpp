class Solution {
public:
    int FirstOccurence(vector<int>& arr, int n  , int k){
        int ans =-1;
        int start =0;
        int end = n-1;

        int mid = start+(end-start)/2;
        while(start<=end){
            if(arr[mid]==k){
                ans =mid;
                end = mid-1;
            }
            else if (k>arr[mid]){
                start = mid+1;

            }
            else{
                end = mid-1;
            }
            mid = start+(end-start)/2;
        }
        return ans;
    }

    int LastOccurence(vector<int>&arr, int n, int k){
        int start =0;
        int ans =-1;
        int end = n-1;
        int mid = start+(end-start)/2;
        while(start<=end){

            if(k==arr[mid]){
                ans = mid;
                start = mid+1;
            }
            else if(k<arr[mid]){
                end = mid-1;
            }
            else{
                start = mid+1;
            }

        mid = start+ (end-start)/2;

        }
        return ans;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        int first = FirstOccurence(nums,n,target);
        int last = LastOccurence(nums,n,target);


        return {first,last};


    }
};