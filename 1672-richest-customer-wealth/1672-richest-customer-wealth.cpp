class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int m=0;
        int tmp=0;
        for(int i=0;i<accounts.size();i++)
        {
            for(int j=0;j<accounts[0].size();j++)
                tmp+=accounts[i][j];
            m=max(m,tmp);
            tmp=0;
        }
            
        return m;
    }
};