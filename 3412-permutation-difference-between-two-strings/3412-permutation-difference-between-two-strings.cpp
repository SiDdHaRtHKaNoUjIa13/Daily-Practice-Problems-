class Solution {
public:
    int findPermutationDifference(string s, string t) {
        unordered_map<char,int>mp1;
        unordered_map<char,int>mp2;
        for(int i =0;i<t.size();i++){
            mp1[t[i]] = i;
        }
        for(int i =0;i<s.size();i++){
            mp2[s[i]] = i;

        }

        int res =0;
        for(auto i :s){
            res = res + abs(mp1[i]- mp2[i]);
        }
        return res;
    }
};