class Solution {
public:
    vector<vector<int>>ans;
    void rec(vector<int>&blk,int st,int k,int n){
        if(n<0 or blk.size()>k)
            return;
        if(n==0 and blk.size()==k){
            ans.push_back(blk);
            return;
        }
        for(int i=st;i<=9;i++)
        {
            blk.push_back(i);
            rec(blk,i+1,k,n-i);
            blk.pop_back();
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int>blk;
        rec(blk,1,k,n);
        return ans;
    }
};