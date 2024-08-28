class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        
        unordered_map<char,bool>mp;
        for(auto x: jewels){
            mp[x] = true;
        }
        int count = 0;
        for(auto y:stones){
            if(mp[y]){
                count++;
            }
        }
        return count;
    }
};