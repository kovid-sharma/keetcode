class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        unordered_map<int,vector<pair<int,int>>>graph;
        for(int i=0;i<times.size();i++)
            graph[times[i][0]].push_back({times[i][1],times[i][2]});
        vector<int>dist(n+1,INT_MAX);
        queue<int>q;
        q.push(k);
        dist[k]=0;
        //bool seen=false;
        while(!q.empty())
        {
            int fr=q.front();
            q.pop();
            for(auto it:graph[fr])
            {
                if(dist[it.first]>dist[fr]+it.second)
                {
                    dist[it.first]=dist[fr]+it.second;
                    //seen=true;
                    //ans=max(dist[it.first],ans);
                     q.push(it.first);
                }
               
            }
        }
        int res=0;
        for(int i=1;i<=n;i++)
        {
            if(dist[i]==INT_MAX)
                return -1;
            res=max(res,dist[i]);
        }
        return res;
    }
};