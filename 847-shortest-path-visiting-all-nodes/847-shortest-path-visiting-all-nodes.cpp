class Solution {
public:
    int shortestPathLength(vector<vector<int>>& graph) {
        int n = graph.size(),Mask;
        queue<pair<int,int>>q;
        set<pair<int,int>>vis;
        for(int i=0;i<n;i++){
            Mask = 1<<i;
            q.push(make_pair(i,Mask));
            vis.insert(make_pair(i,Mask));
        }
        int steps = 0,size;
        while(!q.empty()){
            size = q.size();
            while(size--){
                int curr= q.front().first;
                int VisMask= q.front().second;
                if(VisMask == ((1<<n) - 1))
                    return steps;
                for(int i : graph[curr]){
                    Mask = VisMask | 1<<i;
                    if(vis.count({i,Mask}))
                        continue;
                    q.push({i,Mask});
                    vis.insert({i,Mask});
                }
                q.pop();
            }
            steps++;
        }
        return -1;
    }
};