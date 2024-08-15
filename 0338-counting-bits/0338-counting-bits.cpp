class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>mem(n+1);
        mem[0] = 0;
        for(int i =1;i<=n;i++){
            if(i%2==0){
              mem[i] = mem[i/2];
            }
            else{
                mem[i] = mem[i/2]+1;
            }
            

        }
        return mem;
    }
};