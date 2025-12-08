class Solution {
public:
    bool isPossibleToSplit(vector<int>& nums) {
        unordered_map<int,int>freq;

        // /count frequency of each other 

        for(int x : nums){
            freq[x]++;
        }

        // if any nmber appears more than twice impossible 

        for(auto&p:freq){
            if(p.second>2) return false;
        }

        return true;

    }
};