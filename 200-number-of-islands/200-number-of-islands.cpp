class Solution {
public:
    /*void dfs(int idx,int idy,vector<vector<char>>&g)
    {
        if(idx<0 or idy<0 or idx>=g.size() or idy>=g[0].size() or g[idx][idy]=='0')
            return;
        g[idx][idy]='0';
        dfs(idx+1,idy,g);
         dfs(idx-1,idy,g);
         dfs(idx,idy+1,g);
         dfs(idx,idy-1,g);
    }*/
    int numIslands(vector<vector<char>>& grid) {
        //dfs first then bfs now bfs
        int row=grid.size();
        int col=grid[0].size();
        int cnt=0;
        /*for(int i=0;i<row;i++)
            for(int j=0;j<col;j++)
                if(grid[i][j]=='1')
                    dfs(i,j,grid),cnt++;*/
        queue<pair<int,int>>q;
        vector<int>dir={0,-1,0,1,0};
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                if(grid[i][j]=='1')
                {
                    q.push({i,j});cnt++;
                    while(!q.empty())
                    {
                        pair<int,int>now=q.front();
                        q.pop();
                        for(int k=0;k<4;k++)
                        {
                            int xn=now.first+dir[k];
                            int yn=now.second+dir[k+1];
                            if(xn<0 or yn<0 or xn>=row or yn>=col)continue;
                            if(grid[xn][yn]=='1')
                                q.push({xn,yn});
                            grid[xn][yn]='0';
                        }
                    }
                }
            }
        }
        return cnt;
    }
};