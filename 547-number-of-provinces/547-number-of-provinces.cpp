class Solution {
public:
    void dfs(vector<vector<int>>& isConnected,vector<bool>&visi,int idx,int numCity)
    {
        if(visi[idx]==true)
            return;
        visi[idx]=true;
        for(int x=0;x<numCity;x++)
        {
            if(isConnected[idx][x]==1 and visi[x]==false)
                dfs(isConnected,visi,x,numCity);
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        //Question for underatanding Adjacency Matrix representation of graph
        
        int numCity=isConnected.size();
        vector<bool>vis(numCity,false);
        int proVnce=0;
        for(int i=0;i<numCity;i++)
        {    
            if(vis[i]==true)
                continue;
            proVnce++;
            dfs(isConnected,vis,i,numCity);
        }
        return proVnce;
    }
};