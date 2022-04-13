class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int st_row=0;
        int st_col=0;
        int en_row=n-1;
        int en_col=n-1;
        int curr=1;
        vector<vector<int>>ans(n,vector<int>(n));
        while(st_row<=en_col and st_col<=en_col)
        {   
            for(int i=st_col;i<=en_col;i++)
            {
                ans[st_row][i]=curr;
                curr++;
            }
            st_row++;
            for(int i=st_row;i<=en_row;i++)
            {
                 ans[i][en_col]=curr;
                 curr++;
            }
            en_col--;
            for(int i=en_col;i>=st_col;i--)
            {
                ans[en_row][i]=curr;
                curr++;
            }
            en_row--;
            for(int i=en_row;i>=st_row;i--)
            {
                ans[i][st_col]=curr;
                curr++;
            }
            st_col++;
        }
        return ans;
        
    }
};