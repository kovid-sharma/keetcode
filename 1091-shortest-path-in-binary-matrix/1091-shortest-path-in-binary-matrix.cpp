class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        int n=grid.size();
        //int col=grid[0].size();
        if(grid[0][0]==1 or grid[n-1][n-1]==1)
            return -1;
        queue<pair<int,int>>q;
        q.push({0,0});
        int dir[8][2]={{1,0},{-1,0},{1,1},{-1,-1},{1,-1},{-1,1},{0,1},{0,-1}};
        grid[0][0]=1;int sum=1;        
        while(!q.empty())
        {
            int sz=q.size();
            while(sz--)
            {
                auto fr=q.front();
                int xid=fr.first;
                int yid=fr.second;
                q.pop();
                if(xid==n-1 and yid==n-1)
                    return sum;
               for(int i=0;i<8;i++)
                {
                    int r=xid+dir[i][0];
                    int c=yid+dir[i][1];
                    if(r>=0 and c>=0 and r<n and c<n and grid[r][c]==0){
                        grid[r][c]=1;
                        q.push({r,c});
                    }
                }
                
            }
            sum++;
        }
        return -1;
    }
};