class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int row=matrix.size();
        int col=matrix[0].size();
        vector<int>row_idx(row,-1);
        vector<int>col_idx(col,-1);
        for(int i=0;i<row;i++)
            for(int j=0;j<col;j++)
                if(matrix[i][j]==0)
                {
                    row_idx[i]=0;
                    col_idx[j]=0;
                }
        for(int i=0;i<row;i++)
            for(int j=0;j<col;j++)
                if(row_idx[i]==0 or col_idx[j]==0)
                    matrix[i][j]=0;
        
            
    }
};