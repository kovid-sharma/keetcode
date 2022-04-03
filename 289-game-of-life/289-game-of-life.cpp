class Solution {
public:
    void gameOfLife(vector<vector<int>>& bo) {
        //  State transitions
       //  0 : dead to dead
      //  1 : live to live
     //  2 : live to dead
    //  3 : dead to live
        int row=bo.size();
        int col=bo[0].size();
        int di[8] = {-1, -1, -1,  0, 0,  1, 1, 1};
        int dj[8] = {-1,  0,  1, -1, 1, -1, 0, 1};
        for(int i=0;i<row;i++)
            for(int j=0;j<col;j++)
            {   
                int cnt_live=0;
                for(int k=0;k<8;k++)
                {
                    int i_new=i+di[k];
                    int j_new=j+dj[k];
                    if(i_new<0 or j_new<0 or i_new>=row or j_new>=col)
                        continue;
                    if(bo[i_new][j_new]==1 or bo[i_new][j_new]==2)
                        cnt_live++;
                    
                }
                if(bo[i][j]==1 and cnt_live>3)
                    bo[i][j]=2;
                if(bo[i][j]==1 and cnt_live<2)
                    bo[i][j]=2;
                if(bo[i][j]==0 and cnt_live==3)
                    bo[i][j]=3;
            }
        for(int i=0;i<row;i++)
            for(int j=0;j<col;j++)
                bo[i][j]%=2;
    }
};