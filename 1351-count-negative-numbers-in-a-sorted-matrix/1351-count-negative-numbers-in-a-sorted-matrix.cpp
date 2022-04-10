class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int row=grid.size();
        int col=grid[0].size();
        int lo=0;
        int hi=col;--hi;
        int ans=0;
        for(int i=0;i<row;i++)
        {   
            if(grid[i][0]<0){
                ans+=col;
                continue;
            }
            if(grid[i][col-1]>=0)continue;
            
            
            lo=0;
            while(lo<=hi)
            {
                int mid=lo+(hi-lo)/2;
                if(grid[i][mid]>=0)
                    lo=mid+1;
                else
                    hi=mid-1;
            }
            ans+=(col-lo);
            hi=lo;
        }
        return ans;
    }
};
