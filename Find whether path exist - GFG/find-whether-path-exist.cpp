// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

//isnt this a classical dfs problem 
//but they have tagged it as bfs
// class Solution
// {
//     public:
//     int r,c;
//     //Function to find whether a path exists from the source to destination.
//     bool dfs(vector<vector<int>>& grid,int i,int j){
//         if(i<0 or j<0 or i>=r or j>=c or grid[i][j]==0)
//         return false;
//         if(grid[i][j]==2)
//         return true;
//         grid[i][j]=0;
//         bool o=dfs(grid,i+1,j);
//         bool p=dfs(grid,i,j+1);
//         bool l=dfs(grid,i,j-1);
//         bool k=dfs(grid,i-1,j);
//         return o + k + l + p;
//     }
    
    
    
    
//     bool is_Possible(vector<vector<int>>& grid) 
//     {
//         //code here
//         r=grid.size();
//         c=grid[0].size();
//         for(int i=0;i<grid.size();i++){
//         for(int j=0;j<grid[0].size();i++){
//         if(grid[i][j]==1){
//             if(dfs(grid,i,j))
//             return true;
//             else
//             return false;
//         }}}
//         return false;
//     }
// };
class Solution
{
   public:
   int x,y;
   bool solve(int i,int j,vector<vector<int>>&v){
       if(i<0 || i>=x || j<0 || j>=y || v[i][j]==0)return false;
       if(v[i][j]==2)return true;
       v[i][j]=0;
       return solve(i+1,j,v) or solve(i,j+1,v) or solve(i-1,j,v) or solve(i,j-1,v);
   }
   bool is_Possible(vector<vector<int>>&v) 
   {
       x=v.size();
       y=v[0].size();
       for(int i=0;i<x;i++){
           for(int j=0;j<y;j++){
               if(v[i][j]==1)
                   {
                       if(solve(i,j,v))
                       return true;
                       else
                       return false;
                   }
           }
       }
   }
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<vector<int>>grid(n, vector<int>(n, -1));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				cin >> grid[i][j];
			}
		}
		Solution obj;
		bool ans = obj.is_Possible(grid);
		cout << ((ans) ? "1\n" : "0\n");
	}
	return 0;
}  // } Driver Code Ends