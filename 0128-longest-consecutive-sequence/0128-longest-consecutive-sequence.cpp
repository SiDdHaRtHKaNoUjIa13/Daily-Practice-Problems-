class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
            int longestLength =0;
            unordered_map<int,bool>mpp;

            // mark al numbers as not visited
            for(int num:nums){
                mpp[num] = false;
            }
            for(int num:nums){
                if(mpp[num]==true){
                    continue;
                }
                int currLength = 1;
                int nextNum = num+1;
                // check for the frward consecutives 
                while(mpp.find(nextNum)!=mpp.end()){
                    currLength++;
                    mpp[nextNum] =true;
                    nextNum++;
                }
                // check for the backward consecutives
                int prevNum = num-1;
                while(mpp.find(prevNum)!= mpp.end()){
                    currLength++;
                    mpp[prevNum]=true;
                    prevNum--;

                }
                longestLength = max(longestLength,currLength);
            }

            return longestLength;
    }
};