class Solution {
public:
    int digArtifacts(int n, vector<vector<int>>& artifacts, vector<vector<int>>& dig) {
        int cnt=0;
        vector<vector<int>>grid(n,vector<int>(n,0));
        for(int i=0;i<dig.size();i++)
        {
            grid[dig[i][0]][dig[i][1]]=-1;
        }
        
        for(int i=0;i<artifacts.size();i++)
        {   
            bool ok=true;
            for(int j=artifacts[i][0];j<=artifacts[i][2];j++)
            {
                for(int k=artifacts[i][1];k<=artifacts[i][3];k++)
                {
                   if(grid[j][k]!=-1){
                       ok=false;
                       break;
                   }
                       
                }
            }
            if(ok==true)
                cnt++;
        }
        return cnt;
        
    }
};