class Solution {
public:
    bool check(int i,int j,vector<vector<char>>&board)
    {
        if(board[i][j]=='.')
            return true;
        for(int x=0;x<9;x++)
        {
            if(x==i)continue;
            if(board[i][j]==board[x][j])return false;
        }
        for(int x=0;x<9;x++)
        {
            if(x==j)continue;
            if(board[i][j]==board[i][x])return false;
        }
        int X= i-i%3;
        int Y= j-j%3;
        for(int x=0;x<3;x++)
        {
            for(int y=0;y<3;y++)
            {
                if(X+x==i and Y+y==j)continue;
                if(board[i][j]==board[X+x][Y+y])return false;
            }
        }
        return true;
    }
    bool isValidSudoku(vector<vector<char>>& board) {
        int n=board.size();
        int m=board[0].size();
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++)
                if(!check(i,j,board))
                    return false;
        return true;
    }
};