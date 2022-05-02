class Solution {
public:
    void Pac(int x,int y,vector<vector<int>>&grid,int r,int c,vector<vector<int>>&he)
    {
        if(grid[x][y]>0)
            return;
        grid[x][y]++;
        if(x+1<r and he[x+1][y]>=he[x][y])
            Pac(x+1,y,grid,r,c,he);
        if(x-1>=0 and he[x-1][y]>=he[x][y])
            Pac(x-1,y,grid,r,c,he);
        if(y+1<c and he[x][y+1]>=he[x][y])
            Pac(x,y+1,grid,r,c,he);
        if(y-1>=0 and he[x][y-1]>=he[x][y])
            Pac(x,y-1,grid,r,c,he);
    }
    void Atl(int x,int y,vector<vector<int>>&gri,int r,int c,vector<vector<int>>&he)
    {
        if(gri[x][y]>0)
            return;
        gri[x][y]++;
        if(x+1<r and he[x+1][y]>=he[x][y])
            Atl(x+1,y,gri,r,c,he);
        if(x-1>=0 and he[x-1][y]>=he[x][y])
            Atl(x-1,y,gri,r,c,he);
        if(y+1<c and he[x][y+1]>=he[x][y])
            Atl(x,y+1,gri,r,c,he);
        if(y-1>=0 and he[x][y-1]>=he[x][y])
            Atl(x,y-1,gri,r,c,he);
    }
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& he) {
        //ye to flood fill ka ques hai
        //0 not filled 1 filled by one 2 filled by both and add it in result
        int r=he.size();
        int c=he[0].size();
        vector<vector<int>>Pacific(r,vector<int>(c,0));
        vector<vector<int>>Atlantic(r,vector<int>(c,0));
        for(int i=0;i<r;i++)
        {
            Pac(i,0,Pacific,r,c,he);
            Atl(i,c-1,Atlantic,r,c,he);
        }
        for(int i=0;i<c;i++){
            Pac(0,i,Pacific,r,c,he);
            Atl(r-1,i,Atlantic,r,c,he);
        }
        vector<vector<int>>ans;
        for(int i=0;i<r;i++)
            for(int j=0;j<c;j++)
                if(Pacific[i][j]==1 and Atlantic[i][j]==1)
                    ans.push_back({i,j});
        return ans;
    }
};