class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
        // 0 dead to dead
        // 1 live to live
        // 2 live to dead
        // 3 dead to live
        int m=board.size();
        int n=board[0].size();
        int di[8] = {-1, -1, -1,  0, 0,  1, 1, 1};
        int dj[8] = {-1,  0,  1, -1, 1, -1, 0, 1};
        for(int i=0;i<m;i++)
        {   
            
            for(int j=0;j<n;j++)
            {   
                
                int cnt_live=0;
                for(int k=0;k<8;k++)
                {
                    int i_new=i+di[k];
                    int j_new=j+dj[k];
                    if(i_new<0 or j_new<0 or i_new>=m or j_new>=n)
                        continue;
                    if(board[i_new][j_new]==1 or board[i_new][j_new]==2)
                        cnt_live++;
                    
                }
                if(board[i][j]==1)
                {   
                    if(cnt_live>3)
                    board[i][j]=2;
                    else if(cnt_live==2 or cnt_live==3)
                    board[i][j]=1;
                    else if(cnt_live<2)
                        board[i][j]=2;
                }
                else if(board[i][j]==0)
                {
                    if(cnt_live==3)
                        board[i][j]=3;
                }
            }
        }
        for(int i=0;i<m;i++)
            for(int j=0;j<n;j++)
                board[i][j]%=2;
        
    }
};