class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {

        vector<vector<int>>v(2);
        unordered_set<int>s1(nums1.begin(),nums1.end()); // we have stored the unique elements in the setttt
        unordered_set<int>s2(nums2.begin(),nums2.end());

        for(int num : s1){
            if(s2.find(num)==s2.end()){//not found
                v[0].push_back(num);
            }
        }
        for(int num: s2){
            if(s1.find(num)==s1.end()){
                v[1].push_back(num);
            }
        }
        return v;

    }
};