class Solution {
public:
    int minPathCost(vector<vector<int>>& grid, vector<vector<int>>& moveCost) {
        int row=grid.size();
        int col=grid[0].size();
        vector<int>sum=grid[0];
        //stores the sum of paths to reach this column i
        
        
        //The basic idea is to store the value of best path for each column
        for(int i=1;i<row;i++)
        {   
            vector<int>sums(col,INT_MAX);
            for(int j=0;j<col;j++)
            {
                //from every column in above row we can jump to kth column
                for(int k=0;k<col;k++)
                {
                    int tojump= sum[j];//jumping from j
                        tojump+=grid[i][k];
                    tojump+= moveCost[grid[i-1][j]][k];
                    sums[k]=min(sums[k],tojump);
                }
            }
            sum=sums;
        }
        int mi=INT_MAX;
        for(auto it:sum)
            mi=min(mi,it);
        return mi;
        
    }
};