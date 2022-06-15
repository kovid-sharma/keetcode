class Solution {
public:
    unordered_map<int,int>mp;
    int solve(int i,int j,vector<vector<int>>&t)
    {
        if(i==t.size()-1)
            return t[i][j];
        if(j>=t[i].size())
            return 0;
        int encrypt=pow(i,2)+237*t[i][j]-pow(j,2)+pow(i,3);
        if(mp.find(encrypt)!=mp.end())
            return mp[encrypt];
        return mp[encrypt]=t[i][j]+min(solve(i+1,j,t),solve(i+1,j+1,t));
    }
    int minimumTotal(vector<vector<int>>& triangle) {
        //top-down
        
        return solve(0,0,triangle);
    }
};