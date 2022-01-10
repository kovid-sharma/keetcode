class Solution {
public:
    int dp[70][70][70]={0};
    int rows,cols;
    int cherryPickup(vector<vector<int>>& grid) {
        // top down dp
        rows=grid.size();
        cols=grid[0].size();
        return dpfill(grid,0,0,grid[0].size()-1);
    }
    int dpfill(vector<vector<int>>& grid,int r,int c1,int c2)
    {
        if(r==grid.size()) return 0;
        if(dp[r][c1][c2]!=0) return dp[r][c1][c2];
        int res=0;
        for(int x=-1;x<2;x++)
        {
            // c1 get to c1-1 and pair with c2-1,c2,c2+1
            // c1 remains at c1 and pair with c2-1,c2,c2+1
            // c1 gets c1+1 and pair with c2-1.c2.c2+1
            //one more thing is if c2 becomes less than c1 or even becomes equal to c1 then we dont need
            int ncrob1= c1+x;
            for(int y=-1;y<=1;y++)
            {
                int ncrob2= c2+y;
                if (ncrob1>=0 and ncrob2>ncrob1 and ncrob2<cols) {
                    res = max(res, dpfill(grid,r+1,ncrob1,ncrob2));
                }
            }
        }
        res+= grid[r][c1];
        res+=grid[r][c2];
        dp[r][c1][c2]=res;
        return dp[r][c1][c2];
 }
            
};