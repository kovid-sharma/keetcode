// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
public:
bool dfs(int i,int j,vector<vector<int>>&ans,vector<vector<int>>&matrix,int n)
{
    if(i==n-1 and j==n-1)
    {
        ans[i][j]=1;
        return true;
    }
    if(i>=n or j>=n)
    {
        return false;
    }
    if(matrix[i][j]==0)
    {
        ans[i][j]=0;
        return false;
    }
    ans[i][j]=1;
    for(int jump=1;jump<=matrix[i][j];jump++)
    {
        if(dfs(i,j+jump,ans,matrix,n))
        return true;
        if(dfs(i+jump,j,ans,matrix,n))
        return true;
    }
    ans[i][j]=0;
    return false;
}
	vector<vector<int>> ShortestDistance(vector<vector<int>>&matrix){
	   // Code here
	   int n=matrix.size();
	   vector<vector<int>>ans(n,vector<int>(n,0));
	   if(dfs(0,0,ans,matrix,n))
	   return ans;
	   else
	   return {{-1}};
	}

};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<vector<int>>matrix(n, vector<int>(n,0));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				cin >> matrix[i][j];
			}
		}
		Solution obj;
		vector<vector<int>> ans = obj.ShortestDistance(matrix);
		for(auto i: ans){
			for(auto j: i){
				cout << j << " ";
			}
			cout << "\n";
		}
	}
	return 0;
}  // } Driver Code Ends