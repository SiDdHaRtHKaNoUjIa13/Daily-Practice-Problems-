class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        vector<int>x,y;
        for(int i =0;i<n;i++){
            for(int j =0;j<m;j++){
                if(matrix[i][j]==0){
                    x.push_back(i);
                    y.push_back(j);
                }
            }
        }
        // uptil now we have the index of what we want to change 

        // to make the rows==0
        for(int i =0;i<x.size();i++){
            int index = x[i]; //index of the matrix we have at
            for(int j =0;j<m;j++){ //for the x[i]  we want entire j->m to be zero 
                matrix[index][j] = 0;
            }
        }

        // to maek the columns ==0
        for(int i =0;i<y.size();i++){
            int index = y[i];
            for(int j =0;j<n;j++){
                matrix[j][index]=0;
            }
        }


    }
};