class Solution {
public:
    void caller(vector<vector<char>>& grid,int row,int col,int i,int j)
    {
        if(i>=row or j>=col or i<0 or j<0)
            return;
        if(grid[i][j]!='1')
            return;
        grid[i][j]='@';
        caller(grid,row,col,i+1,j);
        caller(grid,row,col,i-1,j);
        caller(grid,row,col,i,j+1);
        caller(grid,row,col,i,j-1);
    }
    int numIslands(vector<vector<char>>& grid) {
        int cnt=0;
        int row=grid.size();
        if(!row)return 0;
        int col=grid[0].size();
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                if(grid[i][j]=='1')
                {
                    caller(grid,row,col,i,j);
                    cnt++;
                }
            }
        }
        return cnt;
    }
};
/*better will be dfs*/