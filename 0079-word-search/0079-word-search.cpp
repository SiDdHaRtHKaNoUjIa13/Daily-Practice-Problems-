class Solution {

private:
    bool dfs(vector<vector<char>>&board,string word,int i,int j,int index){
        // all characters matched 
        if(index == word.size()){
            return true;
        }
        // out of bounds or mismatch 
        if(i<0 ||j<0||i>=board.size()||j>=board[0].size() || board[i][j] !=word[index]){
            return false;
        }

        char temp= board[i][j];
        board[i][j] = '#';

        // explore 4 direction 

        bool found =  dfs(board,word,i+1,j,index+1)||
                      dfs(board,word,i-1,j,index+1)||
                      dfs(board,word,i,j+1,index+1)||
                      dfs(board,word,i,j-1,index+1);
        
        // backtrack logic keep marking the board as before 

        board[i][j] = temp;

        return found;



    }
public:
    bool exist(vector<vector<char>>& board, string word) {
        
        int m = board.size();
        int n = board[0].size();

        for(int i =0;i<m;i++){
            for(int j =0;j<n;j++){
                if(dfs(board,word,i,j,0)){
                    return true;
                }

            }
        }
        return false;
    }


};