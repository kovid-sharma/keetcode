class Solution {
public:
    int im=0;
    int jm=0;
    void endFinder(vector<vector<int>>& land,int row,int col,int i,int j)
    {
    
        if(i<0 or j<0 or i>=row or j>=col){
            return;
        }
        if(land[i][j]==0)
            return;
        land[i][j]=0;
        endFinder(land,row,col,i+1,j);
        im=max(im,i);
        endFinder(land,row,col,i-1,j);
        
        endFinder(land,row,col,i,j+1);
        jm=max(jm,j);
        endFinder(land,row,col,i,j-1);
        
    }
    vector<vector<int>> findFarmland(vector<vector<int>>& land) {
        vector<vector<int>>ret;
        int row=land.size();
        int col=land[0].size();
        for(int i=0;i<row;i++)
            for(int j=0;j<col;j++){
                if(land[i][j]==1){
                    vector<int>small(4);
                    small[0]=i;
                    small[1]=j;
                    int X=i;
                    int Y=j;
                    endFinder(land,row,col,i,j);
                    small[2]=im;
                    small[3]=jm;
                    ret.push_back(small);
                }
                im=0;
                jm=0;
            }
        
        return ret;
    }
};