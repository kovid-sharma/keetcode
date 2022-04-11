class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int w=0;
        for(int i=0;i<accounts.size();++i){
            int s= accumulate(accounts[i].begin(),accounts[i].end(),0);
            w=max(w,s);
        }
        return w;
    }
};