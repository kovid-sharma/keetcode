class Solution {
public:
    int maxDistance(vector<vector<int>>& grid) {
        /*The idea is to find which is the last '0' in the bfs traversal.*/
        queue<pair<int,int>>q;
        for(int i=0;i<grid.size();i++)
            for(int j=0;j<grid[0].size();j++)
                if(grid[i][j]==1)
                    q.push({i,j});
                
        int zro=-1;
        if(grid.size()*grid[0].size()==q.size())
            return -1;
        while(!q.empty())
        {
           
            int n=q.size();
            for(int i=0;i<n;i++)
            {   
                pair<int,int>f=q.front();
                int x=f.first;   
                int y=f.second;
                q.pop();
                if(x+1>=0 and y>=0 and x+1<grid.size() and y<grid[0].size() and grid[x+1][y]==0){
                    grid[x+1][y]=1;
                    q.push({x+1,y});
                }
                if(x-1>=0 and y>=0 and x-1<grid.size() and y<grid[0].size() and grid[x-1][y]==0){
                    grid[x-1][y]=1;
                    q.push({x-1,y});
                }
                if(x>=0 and y+1>=0 and x<grid.size() and y+1<grid[0].size() and grid[x][y+1]==0){
                    grid[x][y+1]=1;
                    q.push({x,y+1});
                }
                if(x>=0 and y-1>=0 and x<grid.size() and y-1<grid[0].size() and grid[x][y-1]==0){
                    grid[x][y-1]=1;
                    q.push({x,y-1});
                }
                
            }
            zro++;
        }
        return zro;
                               
    }
};