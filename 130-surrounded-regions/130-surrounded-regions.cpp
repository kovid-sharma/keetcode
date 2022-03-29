class Solution {
public:
    void caller(vector<vector<char>>& board,int row,int col,int i,int j)
    {
        if(i<0 or j<0 or i>=row or j>=col or board[i][j]!='O')
            return;
        board[i][j]='q';
        caller(board,row,col,i+1,j);
        caller(board,row,col,i-1,j);
        caller(board,row,col,i,j+1);
        caller(board,row,col,i,j-1);
    }
    void solve(vector<vector<char>>& board) {
        int row=board.size();
        if(!row)return;
        int col=board[0].size();
        for(int i=0;i<row;i++)
        {
            if(board[i][0]=='O')
                caller(board,row,col,i,0);
            if(board[i][col-1]=='O')
                caller(board,row,col,i,col-1);
        }
        for(int i=0;i<col;i++)
        {
            if(board[0][i]=='O')
                caller(board,row,col,0,i);
            if(board[row-1][i]=='O')
                caller(board,row,col,row-1,i);
        }
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                if(board[i][j]=='O')
                    board[i][j]='X';
            }
        }
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                if(board[i][j]=='q')
                    board[i][j]='O';
            }
        }
        
    }
};