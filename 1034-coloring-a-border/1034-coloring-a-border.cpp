class Solution {
public:
    void dfs(int i,int j,vector<vector<int>>&grid,int c)
    {
        if(i<0 or j<0 or i>=grid.size() or j>=grid[0].size() or grid[i][j]!=c)
            return;
        grid[i][j]=INT_MAX;
        dfs(i+1,j,grid,c);
        dfs(i,j+1,grid,c);
        dfs(i-1,j,grid,c);
        dfs(i,j-1,grid,c);

    }
    vector<vector<int>> colorBorder(vector<vector<int>>& grid, int row, int col, int color) {
        int org=grid[row][col];
        vector<vector<int>>cp=grid;
        dfs(row,col,grid,grid[row][col]);
        for(int i = 0; i <grid.size(); i++) {
			for(int j = 0; j < grid[0].size(); j++) {
				if(i == 0 || j == 0 || i == grid.size() - 1 || j == grid[0].size() - 1) {
					if(grid[i][j] == INT_MAX)
						cp[i][j] = color;
				} else {
					if((grid[i][j]) == INT_MAX and 
					   ((grid[i - 1][j] != INT_MAX) || (grid[i + 1][j] != INT_MAX) ||
						(grid[i][j - 1] != INT_MAX) || (grid[i][j + 1] != INT_MAX)))
						cp[i][j] = color;
				}
			}
		}
        return cp;
    }
};
		
				
