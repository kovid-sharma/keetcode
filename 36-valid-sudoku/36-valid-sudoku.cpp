class Solution {
public:
    bool valiDate(int i,int j,vector<vector<char>>&board,char val)
    {
        for(int x=0;x<9;x++)
            if(board[x][j]==val and x!=i)
                return false;
        for(int y=0;y<9;y++)
            if(board[i][y]==val and y!=j)
                return false;
        int rSub=i-i%3;
        int cSub=j-j%3;
        for(int x=0;x<3;x++)
            for(int y=0;y<3;y++)
                if(board[rSub+x][cSub+y]==val and rSub+x!=i and cSub+y!=j)
                    return false;
        return true;
    }
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i=0;i<9;i++)
            for(int j=0;j<9;j++)
                if(board[i][j]!='.')
                    if(!valiDate(i,j,board,board[i][j]))
                        return false;
        return true;
    }
};