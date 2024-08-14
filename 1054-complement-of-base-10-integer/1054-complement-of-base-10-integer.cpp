class Solution {
public:
    int bitwiseComplement(int n) {
        int ans =0;
        if(n==0){
            return 1;

        }
        int power =1;
        while(n>0){
           int bit  = n&1;
           if(bit ==0){
            ans = ans+ (1* power);
           }

           n=n>>1;
           power = power*2;
        }
        
        return ans;
    }
};