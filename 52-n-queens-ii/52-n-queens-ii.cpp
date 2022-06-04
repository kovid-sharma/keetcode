class Solution {
public:
    
    //n-queens hi hai ye
    //using bool array to simulate presence of queen
    int ans=0;
    bool isNoQueen(vector<vector<bool>>&board,int r,int c)
    {
        int i=r;
        int j=c;
        while(j>=0)   //checks if there is any Q in the same row
        {
            if(board[i][j])
                return false;
            j--;
        }
        j=c;
        while(i>=0 and j>=0)
        {
            if(board[i][j])
                return false;
            j--;
            i--;
        }
        j=c;
        i=r;
        while(j>=0 and i<board.size())
        {
            if(board[i][j])
                return false;
            j--;
            i++;
        }
        return true;
    }
    void col(vector<vector<bool>>&board,int idCol)
    {
        if(idCol==board.size()){
            ans++;
            return;
        }
        //now for each row
        for(int row=0;row<board.size();row++)
        {   
            if(board[row][idCol])
                continue;
            if(isNoQueen(board,row,idCol))
            {
                board[row][idCol]=true;
                col(board,idCol+1);
                board[row][idCol]=false;
            }
        }
    }
    int totalNQueens(int n) {
        vector<vector<bool>>board(n,vector<bool>(n,false));
        //solving column wise
        col(board,0);
        return ans;
    }
};