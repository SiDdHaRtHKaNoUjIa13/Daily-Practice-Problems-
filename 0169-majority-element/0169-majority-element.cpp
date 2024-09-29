class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int ans;
        unordered_map<int,int>mp;
        for(int i :nums){
            mp[i]++;
        }
        for(auto it:mp){
            if(it.second>nums.size()/2){
                ans= it.first;
                break;
            }
        }
        return ans;
    }
};