class Solution {
public:
    bool check(int X,int Y,vector<vector<char>>&B,char curr)
    {
        for(int x=0;x<9;x++)
        {
            if(X==x)continue;
            if(B[x][Y]==curr)return false;
        }
        for(int x=0;x<9;x++)
        {
            if(Y==x)continue;
            if(B[X][x]==curr)return false;
        }
        int nX=X-X%3;
        int nY=Y-Y%3;
        for(int x=0;x<3;x++)
        {
            for(int y=0;y<3;y++)
            {
                if(nX+x==X and nY+y==Y)continue;
                if(B[nX+x][nY+y]==curr)return false;
            }
        }
        return true;
    }
    bool solve(vector<vector<char>>&B,int i,int j)
    {
        if(i==9)return true;
        if(j==9)return solve(B,i+1,0);
        if(B[i][j]!='.') return solve(B,i,j+1);
        for(char t='1';t<='9';t++)
        {
            if(check(i,j,B,t))
            {
                B[i][j]=t;
                if(solve(B,i,j+1))return true;
                B[i][j]='.';
            }
        }
        return false;
        
    }
    void solveSudoku(vector<vector<char>>& board) {
        solve(board,0,0);
    }
};