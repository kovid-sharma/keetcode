class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        //manhattan distace
        int r=mat.size();
        int c=mat[0].size();
        for(int i=0;i<r;i++)
            for(int j=0;j<c;j++)
            {
                if(mat[i][j]==0)continue;
                int tmp1=1e5;
                int tmp2=1e5;
                if(i-1>=0)tmp1=mat[i-1][j];
                if(j-1>=0)tmp2=mat[i][j-1];
    
                mat[i][j]=min(tmp1,tmp2)+1;
            }
        for(int i=r-1;i>=0;i--)
            for(int j=c-1;j>=0;j--)
            {
                if(mat[i][j]==0)continue;
                int tmp1=1e5;
                int tmp2=1e5;
                if(i+1<r)tmp1=mat[i+1][j];
                if(j+1<c)tmp2=mat[i][j+1];
                 
                mat[i][j]=min(mat[i][j],min(tmp1,tmp2)+1);
            }
        return mat;
    }
};