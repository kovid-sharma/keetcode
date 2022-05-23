// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Solution
{
  public:
    vector<int> findOrder(int n, int m, vector<vector<int>> prerequisites) 
    {
        //code here
        vector<int>ans;
        unordered_map<int,vector<int>>gra;
        vector<int>scanForRoots(n,0);
        for(int i=0;i<m;i++)
        {
            vector<int>temp=prerequisites[i];
            gra[temp[1]].push_back(temp[0]);
            scanForRoots[temp[0]]+=1;
        }
        queue<int>q;
        for(int i=0;i<n;i++)
        {
            //pushing roots as in bfs
            if(scanForRoots[i]>0)
            continue;
            q.push(i);
        }
        while(!q.empty())
        {   
            int fr=q.front();
            q.pop();
            ans.push_back(fr);
            for(auto ints:gra[fr])
                {
                    scanForRoots[ints]--;
                    if(scanForRoots[ints]==0)
                    q.push(ints);
                }
        
            
        }
        if(ans.size()==n)
        return ans;
        else
        return {};
      
    }
};

// { Driver Code Starts.

int check(int V, vector <int> &res, vector<int> adj[]) {
    vector<int> map(V, -1);
    for (int i = 0; i < V; i++) {
        map[res[i]] = i;
    }
    for (int i = 0; i < V; i++) {
        for (int v : adj[i]) {
            if (map[i] > map[v]) return 0;
        }
    }
    return 1;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n, m;
        cin >> n >> m;
        int u, v;

        vector<vector<int>> prerequisites;

        for (int i = 0; i < m; i++) {
            cin >> u >> v;
            prerequisites.push_back({u,v});
        }
        
        vector<int> adj[n];
        for (auto pre : prerequisites)
            adj[pre[1]].push_back(pre[0]);
        
        Solution obj;
        vector <int> res = obj.findOrder(n, m, prerequisites);
        if(!res.size())
            cout<<"No Ordering Possible"<<endl;
        else
            cout << check(n, res, adj) << endl;
    }
    
    return 0;
}  // } Driver Code Ends