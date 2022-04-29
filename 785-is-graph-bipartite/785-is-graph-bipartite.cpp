class Solution {
public:
    bool isBipartite(vector<vector<int>>& graph) {
        int n=graph.size();
        vector<int>col(n,0);
        for(int i=0;i<n;i++)
        {   
            if(col[i]==0){
            queue<int>q;
            q.push(i);
            col[i]=1;
            while(!q.empty())
            {
                int top=q.front();
                q.pop();
                for(int j=0;j<graph[top].size();j++)
                {
                    if(col[graph[top][j]]==col[top])return false;
                    if(col[graph[top][j]]==0){
                    col[graph[top][j]]=-col[top];
                    q.push(graph[top][j]);
                    }
                }
            }
                
        }
            //return true;
    }return true;
}
};
