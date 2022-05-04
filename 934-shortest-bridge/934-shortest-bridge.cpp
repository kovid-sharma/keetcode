class Solution {
public:
    void dfs(vector<vector<int>>& grid,int i,int j,vector<vector<int>>& mark)
    {
        if(i<0 or j<0 or i>=grid.size() or j>=grid.size() or grid[i][j]==0)
            return;
        if(mark[i][j]>0)
            return;
        mark[i][j]=1;
        dfs(grid,i+1,j,mark);
        dfs(grid,i-1,j,mark);
        dfs(grid,i,j-1,mark);
        dfs(grid,i,j+1,mark);
    }
    int shortestBridge(vector<vector<int>>& grid) {
       //first isalnd marked 1;
        int n=grid.size();
        vector<vector<int>>mark(n,vector<int>(n,0));
        for(int i=0;i<n;i++){
            bool hit=false;
            if(hit)break;
            for(int j=0;j<n;j++){
                if(grid[i][j]==1)
                {
                    dfs(grid,i,j,mark);
                    hit=true;
                    break;
                }
            }
            if(hit)break;
        }
        queue<pair<int,int>>q;
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                if(mark[i][j]>0)
                    q.push({i,j});
        int ans=0;
        vector<int>dir={0,-1,0,1,0};
        while(!q.empty())
        {
            int sz=q.size();
            ans++;
            for(int i=0;i<sz;i++)
            {
                pair<int,int>now=q.front();
                q.pop();
                int x=now.first;
                int y=now.second;
                if(grid[x][y]==1 and mark[x][y]==0)
                    return ans;
                for(int j=0;j<4;j++)
                {
                    int nx=x+dir[j];
                    int ny=y+dir[j+1];
                    
                    if(nx>=0 and ny>=0 and nx<n and ny<n and mark[nx][ny]==0 and grid[nx][ny]==0){
                        q.push({nx,ny});
                        mark[nx][ny]=1;
                    }
                    if(nx>=0 and ny>=0 and nx<n and ny<n and grid[nx][ny]==1 and mark[nx][ny]==0)
                        return ans-1;
                }
                
            }
        }
        return 0;
    }
};
