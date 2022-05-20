class Solution {
public:
    int ans=0;
    void dfs(int i,int j,int r,int c,vector<vector<int>>& grid,int cov,int toCov)
    {
        if(i<0 or j<0 or i>=r or j>=c or grid[i][j]==-1)
            return;
        if(grid[i][j]==2)
        {
            if(cov==toCov-1)
                ans++;
            return;
        }
        grid[i][j]=-1;
        dfs(i+1,j,r,c,grid,cov+1,toCov);
        dfs(i,j-1,r,c,grid,cov+1,toCov);
        dfs(i,j+1,r,c,grid,cov+1,toCov);
        dfs(i-1,j,r,c,grid,cov+1,toCov);
        grid[i][j]=0;
    }
    int uniquePathsIII(vector<vector<int>>& grid) {
        //becomes tricky if we want every non obstacle coverd
        int m=grid.size();
        int n=grid[0].size();
        int toCov=0;
        int sX,sY;
        for(int i=0;i<m;i++) 
            for(int j=0;j<n;j++)
                if(grid[i][j]!=-1){
                    toCov++;
                    if(grid[i][j]==1){
                        sX=i;
                        sY=j;
                    }
                }
        //toCov=4 empty=3
        
        dfs(sX,sY,m,n,grid,0,toCov);
        return ans;
    }
};

    
   