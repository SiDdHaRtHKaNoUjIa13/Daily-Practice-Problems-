class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int leftProduct = 1;
        int rightProduct = 1;
        int ans = nums[0]; //no intention of picking [0] just fr keeping it in start 

        for(int i =0;i<n;i++){

            // if any leftProduct or rightPorduct become 0 then update it to 1

            leftProduct = leftProduct == 0?1: leftProduct;
            rightProduct = rightProduct == 0?1: rightProduct;     


            // prefix product 
            leftProduct *= nums[i];

            // suffix product
            rightProduct *=nums[n-1-i];

            ans = max(ans,max(leftProduct,rightProduct));

        }
        return ans;
        
    }
};