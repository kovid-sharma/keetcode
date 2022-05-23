class Solution {
public:
    pair<int,int> paired(vector<string>&strs,int id)
    {   
        int z=0;int o=0;
        for(auto ch:strs[id])
        {
            if(ch=='0')
                z++;
            else
                o++;
        }
        return {z,o};
            
    }
    int solve(int idx,vector<pair<int,int>>&stp,int zer,int one,vector<vector<vector<int>>>&dp)
    {
        if(idx==stp.size())
            return 0;
        if(zer==0 and one==0)
            return 0;
        if(dp[idx][zer][one]!=-1)
            return dp[idx][zer][one];
        pair<int,int>zerOne= stp[idx];
        int take=0;
        if(zer>=zerOne.first and one>=zerOne.second)
            take=1+solve(idx+1,stp,zer-zerOne.first,one-zerOne.second,dp);
        int notake=solve(idx+1,stp,zer,one,dp);
        return dp[idx][zer][one]=max(take,notake);
        // return max(take,notake);
            
    }
    int findMaxForm(vector<string>& strs, int zer, int one) {
        //classic take notake problem
        //trying to make faster by storing the counts
        //now using memo
        //3d dp as 3 parameters
        vector<vector<vector<int>>> dp(strs.size()+1,vector<vector<int>> (zer+1,vector<int>(one+1,-1)));
         // memset(dp , -1 , sizeof(dp));
        vector<pair<int,int>>stp;
        for(int i=0;i<strs.size();i++)
        {
            stp.push_back(paired(strs,i));
        }
        
        
        
        return solve(0,stp,zer,one,dp);
    }
};