class Solution {
public:
    void dfs(int row,int col,int x,int y,vector<vector<char>>& board)
    {   
        if(x<0 or y<0 or x>=row or y>=col)return;
        if(board[x][y]=='X')
        {
            board[x][y]=':';
            dfs(row,col,x+1,y,board);
           // dfs(row,col,x-1,y,board);
            dfs(row,col,x,y+1,board);
            //dfs(row,col,x,y-1,board);
        }
        else
            return;
    }
    int countBattleships(vector<vector<char>>& board) {
        int cnt=0;
        int row=board.size();
        int col=board[0].size();
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                if(board[i][j]=='X')
                {
                    cnt++;
                    dfs(row,col,i,j,board);
                }
            }
        }
        return cnt;
    }
};