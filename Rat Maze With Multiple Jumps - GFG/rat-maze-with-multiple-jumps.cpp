// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
public:
bool dfs(int i,int j,vector<vector<int>>&ans,vector<vector<int>>&matrix)
{
    if(i==ans.size()-1 and j==ans.size()-1)
    {
        ans[i][j]=1;
        return true;
    }
    if(i<0 or j<0 or i>=matrix.size() or j>=matrix[0].size()){
        return false;
    }
    if(matrix[i][j]==0){
        ans[i][j]=0;
        return false;
    }
    ans[i][j]=1;
    int tmp=1;
    while(tmp<=matrix[i][j])
    {
        if(dfs(i,j+tmp,ans,matrix))
        return true;
        if(dfs(i+tmp,j,ans,matrix))
        return true;
        tmp++;
        
    }
    ans[i][j]=0;
    return false;
}
	vector<vector<int>> ShortestDistance(vector<vector<int>>&matrix){
	   // Code here
	   int n=matrix.size();
	   vector<vector<int>>ans(n,vector<int>(n,0));
	   if(dfs(0,0,ans,matrix))
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