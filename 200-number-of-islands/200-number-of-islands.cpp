class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int cnt=0;
        vector<int>dir={0,-1,0,1,0};
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[0].size();j++)
            {
                if(grid[i][j]=='1')
                {
                    cnt++;
                    queue<pair<int,int>>q;
                    q.push({i,j});
                    grid[i][j]='0';
                    while(!q.empty())
                    {
                        int sz=q.size();
                        while(sz--)
                        {   
                            auto fr=q.front();
                            q.pop();
                            for(int di=0;di<4;di++)
                            {
                                int xN=fr.first+dir[di];
                                int yN=fr.second+dir[di+1];
                                if(xN>=0 and yN>=0 and xN<grid.size() and yN<grid[0].size() and grid[xN][yN]=='1')
                                {
                                    grid[xN][yN]='0';
                                    q.push({xN,yN});
                                }
                            }
                        }
                    }
                }
            }
        }
        return cnt;
    }
};