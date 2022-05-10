class Solution {
public:
   // int rem=0;
    int vis[101][101][205];
    bool valid(vector<vector<char>>& grid,int i,int j,int rem){
        int r=grid.size();
        int c=grid[0].size();
        if(grid[i][j]=='(')
            rem++;
        else
            rem--;
        if(rem<0)
            return false;
        if(vis[i][j][rem]!=-1)return vis[i][j][rem];
        /*if(i>=r or j>=c)
            return vis[i][j][rem]=false;*/
        if(i==r-1 and j==c-1 and rem==0)
            return vis[i][j][rem]=true;
        if(i<r-1 and valid(grid,i+1,j,rem))return vis[i+1][j][rem]=true;
        if(j<c-1 and valid(grid,i,j+1,rem))return vis[i][j+1][rem]=true;
        return vis[i][j][rem]=false;
        
    }
    bool hasValidPath(vector<vector<char>>& grid) {
        memset(vis,-1,sizeof(vis));
        return valid(grid,0,0,0);
    }
};
