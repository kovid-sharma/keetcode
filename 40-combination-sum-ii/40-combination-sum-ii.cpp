class Solution {
public:
    vector<vector<int>>ans;
    void rec(vector<int>& candidates, int target,vector<int>&now,int idx){
        if(target==0){
            ans.push_back(now);
            return;
        }
        if(target<0)return;
        if(idx==candidates.size())return;
        //take
        int currval=candidates[idx];
        now.push_back(currval);
        rec(candidates,target-currval,now,idx+1);
        now.pop_back();
        idx++;
        //dont take
        while(idx<candidates.size() and candidates[idx]==currval)idx++;
        rec(candidates,target,now,idx);
        
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<int>now;
        sort(candidates.begin(),candidates.end());
        rec(candidates,target,now,0);
        
        return ans;
    }
};



   
   
   
   
   /* while (A[pos] == num) ++pos;
    combinationSum2(A, pos, path, target, res);
}*/