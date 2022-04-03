class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int row=matrix.size();
        int col=matrix[0].size();
        bool r=true;
        bool c=true;
        for(int i=0;i<row;i++)
            for(int j=0;j<col;j++)
                if(matrix[i][j]==0)
                {   
                    if(i==0)r=false;
                    if(j==0)c=false;
                    matrix[i][0]=0;
                    matrix[0][j]=0;
                } 
        for(int i=1;i<row;i++)
            for(int j=1;j<col;j++)
                if(matrix[i][0]==0 or matrix[0][j]==0)
                    matrix[i][j]=0;
        if(!c)
            for(int j=0;j<row;j++)
                matrix[j][0]=0;
        if(!r)
            for(int j=0;j<col;j++)
                matrix[0][j]=0;
            
    }
};