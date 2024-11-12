class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maxCandies =  *max_element(candies.begin(),candies.end()); // find the maximum candies any kd has
        vector<bool>result;

        for(int candy:candies){
            result.push_back(candy+extraCandies>=maxCandies ); //check if adding extra candies make the total count greater than mmaxcadies 

        }
        return result;


    }
};