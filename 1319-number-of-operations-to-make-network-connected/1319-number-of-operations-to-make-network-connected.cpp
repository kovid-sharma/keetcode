class Solution {
public:
    void dfs(vector<bool>&vis,unordered_map<int,vector<int>>&graph,int idx)
    {
        if(vis[idx])
            return;
        vis[idx]=true;
        for(int i=0;i<graph[idx].size();i++)
        {
            if(vis[graph[idx][i]]==false)
                dfs(vis,graph,graph[idx][i]);
        }
    }
    int makeConnected(int n, vector<vector<int>>& connections) {
        //Adjacency list representaion
        //First simply find number of connected componenets
        //cables required = numConnected-1
        unordered_map<int,vector<int>>graph;
        int szCon=connections.size();
        //Now we can say if szCon is less than n-1 than not happening.
        if(szCon<n-1)
            return -1;
        for(int i=0;i<szCon;i++)
        {
            graph[connections[i][0]].push_back(connections[i][1]);
            graph[connections[i][1]].push_back(connections[i][0]);
        }
        vector<bool>vis(n,false);
        int cnt=-1;
        for(int i=0;i<n;i++)
        {
            if(vis[i]==false)
            {
                dfs(vis,graph,i);
                cnt++;
            }
        }
        return cnt;
    }
};