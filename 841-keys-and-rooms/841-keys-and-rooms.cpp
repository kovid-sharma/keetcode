class Solution {
public:
    void dfs(int idx,vector<bool>&vis,vector<vector<int>>&rooms){
        for(int i=0;i<rooms[idx].size();i++)
            if(vis[rooms[idx][i]]==false){
                vis[rooms[idx][i]]=true;
                dfs(rooms[idx][i],vis,rooms);
                }
    }
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n=rooms.size();
        vector<bool>vis(n,false);
        vis[0]=true;
        dfs(0,vis,rooms);
        bool hit=true;
        for(int i=0;i<vis.size();i++)
            if(vis[i]==false)
                hit=false;
        return hit;
        
    }
};