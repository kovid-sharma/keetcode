// { Driver Code Starts
#include <bits/stdc++.h>
 
using namespace std;
 

 // } Driver Code Ends
class Solution{
public:
void dfs(vector<bool>&vis,unordered_map<int,vector<int>>&gra,int id)
{   
    vis[id]=true;
    for(auto &v:gra[id])
    {   
        if(vis[v]==false)
        dfs(vis,gra,v);
    }
}
    int captainAmerica(int N, int M, vector<vector<int>> &V){
        // Code Here
        unordered_map<int,vector<int>>gra;
        for(int i=0;i<M;i++){
            gra[V[i][1]].push_back(V[i][0]);
        }
        vector<bool>vis(N+1,false);
        int dfsCalledLast=-1;
        for(int i=1;i<=N;i++)
        {
            if(vis[i]==false)
            {
                dfsCalledLast=i;
                dfs(vis,gra,i);
            }
        }
        vis.resize(N+1,false);
         fill(vis.begin(),vis.end(),false);
        dfs(vis,gra,dfsCalledLast);
        for(int i=1;i<=N;i++)
            if(vis[i]==false)
                return 0;
        vector<int> adj[N+1];
        for(int i=0;i<M;i++){
            int u = V[i][0],v = V[i][1];
            adj[u].push_back(v);
        }
        
        queue<int> q;
        q.push(dfsCalledLast);
        
        fill(vis.begin(),vis.end(),false);
        
        vis[dfsCalledLast] = true;
        
        int ans = 0;
        while(!q.empty()){
            int v = q.front();
            q.pop();
            
            ans++;
            for(auto& u:adj[v]){
                if(!vis[u]){
                    q.push(u);
                    vis[u] = true;
                }
            }
        }
        
        return ans;
        
    } 
};

// { Driver Code Starts.
 

int main() {
    int t;cin >> t;
    while(t--)
    {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> v(m+1);
        for(int i=0;i<m;i++){
            int a, b;cin >> a >> b;
            v[i].push_back(a);
            v[i].push_back(b);
        }
        
        Solution obj;
        cout << obj.captainAmerica(n, m, v) << endl;
    }
 
}  // } Driver Code Ends