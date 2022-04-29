class Solution {
public:
    bool isBipartite(vector<vector<int>>& graph) {
        int n=graph.size();
        vector<int>col(n,0);
        for(int i=0;i<n;i++)
        {   
            if(!col[i]){
                queue<int>q;
                q.push(i);
                col[i]=1;
                while(!q.empty())
                {
                    int top=q.front();
                    q.pop();
                    for(auto it:graph[top])
                    {
                        if(col[it]==col[top])return false;
                        if(col[it]==0)
                        {
                            col[it]=-col[top];
                            q.push(it);
                        }
                    }
                }
            }
        }
        return true;
    }
};