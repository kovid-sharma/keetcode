// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    // Function to find the number of islands.
    void dfs(int i,int j,vector<vector<char>>&grid,int r,int c)
    {
        if(i<0 or j<0 or i>=r or j>=c or grid[i][j]=='0')
        return;
        grid[i][j]='0';
        dfs(i+1,j,grid,r,c);
        dfs(i,j-1,grid,r,c);
        dfs(i,j+1,grid,r,c);
        dfs(i-1,j,grid,r,c);
        dfs(i-1,j+1,grid,r,c);
        dfs(i+1,j+1,grid,r,c);
        dfs(i+1,j-1,grid,r,c);
        dfs(i-1,j-1,grid,r,c);
    }
    int numIslands(vector<vector<char>>& grid) {
        // Code here
        int cnt=0;
        int n=grid.size();
        int m=grid[0].size();
        for(int i=0;i<n;i++)
        {
             for(int j=0;j<m;j++)
           {
                if(grid[i][j]=='1')
                {
                  cnt++;
                  dfs(i,j,grid,n,m);
                }
            }
        }
        return cnt;
    }
};

// { Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, m;
        cin >> n >> m;
        vector<vector<char>> grid(n, vector<char>(m, '#'));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        Solution obj;
        int ans = obj.numIslands(grid);
        cout << ans << '\n';
    }
    return 0;
}  // } Driver Code Ends