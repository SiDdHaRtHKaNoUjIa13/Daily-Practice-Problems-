class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n = gain.size();
        vector<int>altitudes(n+1);

        altitudes[0] = 0;

        for(int i =1;i<=n;i++){
            altitudes[i] = altitudes[i-1]+gain[i-1];
        }
        // we are done by complting the altitudes array 

        sort(altitudes.rbegin(),altitudes.rend());
        return altitudes[0];
    }
};