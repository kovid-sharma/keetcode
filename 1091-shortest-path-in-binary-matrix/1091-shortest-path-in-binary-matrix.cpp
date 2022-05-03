class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        int n=grid.size();
        if(grid[0][0]==1 or grid[n-1][n-1]==1)
            return -1;
        int move=1;
        queue<pair<int,int>>q;
        q.push({0,0});
        grid[0][0]=1;
        int dir[8][2]={{1,0},{-1,0},{1,1},{-1,-1},{1,-1},{-1,1},{0,1},{0,-1}};
        while(!q.empty())
        {
            int s=q.size();
            for(int j=0;j<s;j++)
            {
                int x=q.front().first;
                int y=q.front().second;
                q.pop();
                if(x==n-1 and y==n-1)
                    return move;
                for(int i=0;i<8;i++)
                {
                    int r=x+dir[i][0];
                    int c=y+dir[i][1];
                    if(r>=0 and c>=0 and r<n and c<n and grid[r][c]==0){
                        grid[r][c]=1;
                        q.push({r,c});
                    }
                }
                
            }
            move++;
        }
        return -1;
    }
};