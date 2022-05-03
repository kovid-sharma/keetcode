class Solution {
public:  
    void solve(vector<vector<int>>&unqCom,vector<int>&pickOrNot,int idx,int target,vector<int>&c)
    {
        
        if(target<0)
            return;
        if(target==0){
            unqCom.push_back(pickOrNot);return;
        }
        if(idx==c.size())
            return;
        
        
        //let's pick element
        int currEle=c[idx];
        pickOrNot.push_back(currEle);
        
        solve(unqCom,pickOrNot,idx+1,target-currEle,c);
        //We don't care if target went on to be 0
        //We backtrack to implement NOT pick case
        pickOrNot.pop_back();
        
        while(idx<c.size() and c[idx]==currEle)idx++;
        //Let's NOT pick
        solve(unqCom,pickOrNot,idx,target,c);
        
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>>unqCom;
        vector<int>pickOrNot;
        int idx=0;//starting index of choices
        sort(candidates.begin(),candidates.end());
        solve(unqCom,pickOrNot,idx,target,candidates);
        return unqCom;
    }
};