class Solution {
public:
    int numOfMinutes(int n, int headID, vector<int>& manager, vector<int>& informTime) {
        //basic
        unordered_map<int,vector<int>>graph;
        queue<pair<int,int>>q;
        int ma=0;
        for(int i=0;i<n;i++)
        {
            if(manager[i]==-1)
                continue;
            graph[manager[i]].push_back(i);
        }
        q.push({headID,0});
        while(!q.empty())
        {
            int nq=q.size();
            for(int i=0;i<nq;i++)
            {
                auto f=q.front();
                int node=f.first;
                int ti=f.second;
                q.pop();
                ma=max(ma,ti+informTime[node]);
                for(int j=0;j<graph[node].size();j++)
                {
                    q.push({graph[node][j],ti+informTime[node]});
                }
                
            }
        }
        return ma;
    }
};