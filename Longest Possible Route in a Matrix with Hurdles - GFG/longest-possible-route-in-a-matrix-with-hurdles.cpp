// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution {
public:
    int ans=INT_MIN;
    void solve(int i,int j,int &dx,int &dy,vector<vector<int>>&mat,vector<vector<bool>>&vis,int steps)
    {
        if(i==dx and j==dy)
        {
            ans=max(ans,steps);
            return;
        }
        if(i<0 or j<0 or i>=mat.size() or j>=mat[0].size() or vis[i][j]==true)
        {
            return;
        }
        if(mat[i][j]==0)
        return;
        vis[i][j]=true;
        solve(i+1,j,dx,dy,mat,vis,steps+1);
        solve(i-1,j,dx,dy,mat,vis,steps+1);
        solve(i,j+1,dx,dy,mat,vis,steps+1);
        solve(i,j-1,dx,dy,mat,vis,steps+1);
        vis[i][j]=false;
    }
    int longestPath(vector<vector<int>> matrix, int xs, int ys, int xd, int yd)
    {
        if(matrix[xs][ys]==0 or matrix[xd][yd]==0)
        return -1;
        vector<vector<bool>>vis(matrix.size(),vector<bool>(matrix[0].size(),false));
        solve(xs,ys,xd,yd,matrix,vis,0);
        if(ans==INT_MAX)return -1;
        return ans;
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int xs, ys, xd, yd;
        cin >> xs >> ys >> xd >> yd;
        vector<vector<int>> mat(n, vector<int>(m));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> mat[i][j];
            }
        }
        Solution ob;
        int ans = ob.longestPath(mat, xs, ys, xd, yd);
        cout << ans;
        cout << "\n";
    }
    return 0;
}  // } Driver Code Ends