class Solution {
public:
    void solve(vector<vector<int>>&ans,int target,int index,vector<int>tmp,vector<int>can)
    {
        if(target==0)
        {
            ans.push_back(tmp);return;
        }
        if(target<0)
            return;
        if(index==can.size())
            return;
        
        solve(ans,target,index+1,tmp,can);
        
        tmp.push_back(can[index]);
        solve(ans,target-can[index],index,tmp,can);
        tmp.pop_back();
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>tmp;
        solve(ans,target,0,tmp,candidates);
        return ans;
    }
};