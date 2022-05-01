class Solution {
public:
    int a(vector<vector<int>>&grid,int idx,int idy){
        if(idx<0 or idy<0 or idx>=grid.size() or idy>=grid[0].size() or grid[idx][idy]==0)
            return 0;
        if(grid[idx][idy]==2)
            return 0;
        grid[idx][idy]=2;
        return 1+
        a(grid,idx+1,idy)+
        a(grid,idx-1,idy)+
        a(grid,idx,idy+1)+
        a(grid,idx,idy-1);
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int ma=0;
        for(int i=0;i<grid.size();i++)
            for(int j=0;j<grid[0].size();j++)
                if(grid[i][j]==1)
                    ma=max(a(grid,i,j),ma);
        return ma;
    }
};