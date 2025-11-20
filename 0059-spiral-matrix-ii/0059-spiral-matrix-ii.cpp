class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>>mat(n,vector<int>(n,0));

        int top = 0;
        int bottom = n-1;
        int left =0;
        int right = n-1;
        int num =1;
        int target = n*n;


        while(num<=target){
            // fill top ow from left ->right
            for(int col = left ;col<=right &&num<=target;col++){
                mat[top][col] = num++;
            }
            top++;

            // fill rught column from top ->bottom

            for(int row = top;row<=bottom && num<=target;row++){
                mat[row][right]= num++;
            }
            right--;

            for(int col = right;col>=left && num<=target;col--){
                mat[bottom][col] =num++;
            }
            bottom--;

            for(int row = bottom;row>=top&&num<=target;row--){
                mat[row][left]=num++;
            }
            left++;


        }
        return mat;
    }
};