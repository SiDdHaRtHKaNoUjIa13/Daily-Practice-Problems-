class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int size = flowerbed.size();
        for(int i =0;i<size && n>0;i++){
            // check for the curent and adjacent plots empty or not
            if(flowerbed[i]==0 && (i==0||flowerbed[i-1]==0) &&(i==size-1|| flowerbed[i+1]==0)) {
                // plant the flower 
                flowerbed[i]= 1;
                n--;
                // now move to next non-adjacent plot i.e skip the next plot 
                i++;
            }
        }
        return n==0;
    }
};