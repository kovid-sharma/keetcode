
class Solution {
public:
    int nearestExit(vector<vector<char>>& maze, vector<int>& ent) {
        int r=maze.size();
        int c=maze[0].size();
        maze[ent[0]][ent[1]]='+';
        queue<pair<int,int>>q;
        q.push({ent[0],ent[1]});
        int ans=0;
        vector<int>dir={0,-1,0,1,0};
        while(!q.empty())
        {
            int n=q.size();
            ans++;
            for(int i=0;i<n;i++)
            {
                auto f=q.front();
                q.pop();
                int x=f.first;
                int y=f.second;
                for(int j=0;j<4;j++)
                {
                    int nx=x+dir[j];
                    int ny=y+dir[j+1];
                    if(nx<0 or ny<0 or nx>=r or ny>=c)
                        continue;
                    if(maze[nx][ny]=='+')
                        continue;
                    if(nx==0 or ny==0 or nx==r-1 or ny==c-1)
                        return ans;
                    maze[nx][ny]='+';
                    q.push({nx,ny});
                    
                }
            }
        }
        return -1;
    }
};