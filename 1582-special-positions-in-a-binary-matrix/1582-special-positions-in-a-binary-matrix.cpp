class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        vector<int>r(mat.size());
        vector<int>c(mat[0].size());
        for(int i=0;i<mat.size();i++)
            for(int j=0;j<mat[0].size();j++)
                if(mat[i][j])
                {
                    r[i]++;
                    c[j]++;
                }
        int cnt=0;
        for(int i=0;i<mat.size();i++)
            for(int j=0;j<mat[0].size();j++)
                if(mat[i][j])
                {
                    if(r[i]==1 and c[j]==1)
                        cnt++;
                }return cnt;
        
    }
};