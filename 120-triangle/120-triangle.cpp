class Solution {
public:
    int minimumTotal(vector<vector<int>>& grid) {
        //bottom up
        
        int row=grid.size();
        vector<int>prev(grid[row-1].size(),0);
        for(int i=0;i<grid[row-1].size();i++)
            prev[i]=grid[row-1][i];
        for(int i=row-2;i>=0;i--)
        {
            vector<int>curr(grid[i].size(),1e6);
            for(int j=0;j<grid[i].size();j++)
            {
                curr[j]=min({curr[j],grid[i][j]+prev[j],grid[i][j]+prev[j+1]});
            }
            prev=curr;
        }
        return prev[0];
    }
};