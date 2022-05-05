class Solution {
public:
    vector<vector<int>>ans;
    void dfs(int targ,vector<int>emp,vector<vector<int>>&gra,int node)
    {
        
        if(node==targ){
            emp.push_back(targ);
            ans.push_back(emp);
            return;
        }
        emp.push_back(node);
        for(int i=0;i<gra[node].size();i++)
            dfs(targ,emp,gra,gra[node][i]);
        emp.pop_back();
    }
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        int tar=graph.size();
        vector<int>empty;
        dfs(tar-1,empty,graph,0);
        return ans;
    }
};