class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        long long int PrefixSum=0;
        int count =0;
        unordered_map<long long int, long long int>m;

        m[0]=1;

        for(int i =0;i<nums.size();i++){
            PrefixSum+= nums[i];
            if(m.count(PrefixSum-k)){
                count+=m[PrefixSum-k];
                m[PrefixSum]++;
            }
            else{
                m[PrefixSum]++;
            }
        }
        return count;
    }
};